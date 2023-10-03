#define _CRT_SECURE_NO_WARNINGS
#include"three.h"
void board(char arr[ROW][COL],int row,int col)
{
	int a, b;
	for (a=0;a<row;a++)
	{
		for (b=0;b<col;b++)
		{
			arr[a][b] = ' ';
     
		}

	}






 }
void menu()
{
	printf("*************************************\n");
	printf("**1.play   ************  2.exit******\n");
	printf("*************************************\n");
}
void displayboard(char arr[ROW][COL], int row, int col)
{
	int a, b;
	for (a=0;a<row;a++)
	{
		for (b=0;b<col;b++)
		{
			printf(" %c ", arr[a][b]);
			if(b<col-1)
			printf("|");

		}
		printf("\n");
		if (a < row - 1)
		{
			for (b=0;b<col;b++)
			{
				if(b<col-1)
				printf("---|");
				if (b == col - 1)
				{
					printf("---\n");
				}
			}
		}		
	}
}
int Fullboard(char arr[ROW][COL],int row,int col)
{
	int c = 0; int d = 0;
	for (c = 0; c < row; c++)
	{
		for (d = 0; d < col; d++)
		{
			if (arr[c][d] == ' ')
				return 0;
		}
	}
	return 1;
}
void playermove(char arr[ROW][COL], int row, int col)
{
	int x = 1;
	int y = 1;
	while (1)
	{
		printf("请输入游戏坐标:\n");
		scanf("%d%d",&x,&y);

		if ((x<=row && y <= col) &&( x>0 && y > 0))
		{
			if (arr[x - 1][y - 1] ==' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("坐标已经被占用\n");
	}
		else
		printf("输入坐标不合法\n");
	}
}
void computermove(char arr[ROW][COL], int row, int col)
{

	
	while (1)
	{
		int x = rand() %row;
		int y = rand() % col;
			if (arr[x][y] == ' ')
			{
				arr[x][y] = '+';
				break;
			}
	}



}
char is_win(char arr[ROW][COL], int row, int col)
{
	//1.row
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')
			return arr[i][0];
	}
	for (i = 0; i < row; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[2][i] == arr[1][i] && arr[0][i] != ' ')
			return arr[i][0];

	}
	if ((arr[0][0] == arr[1][1] && arr[2][2] == arr[1][1] )||( arr[0][2] == arr[1][1] && arr[2][0] == arr[1][1]))
		return arr[1][1];
	else if (1 == Fullboard(arr,ROW,COL))
		return 's';
	else
		return 0;
}