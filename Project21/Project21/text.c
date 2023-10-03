#define _CRT_SECURE_NO_WARNINGS
#include"three.h"



int main()
{
	int a = 0;
	srand((unsigned)time(NULL));
	char b= '0';
	do
	{
		menu();
		scanf("%d", &a);

		switch (a)
		{
		case 1:
			printf("开始游戏\n");
			char arr[ROW][COL] = { 0 };
			board(arr, ROW, COL);
			displayboard(arr, ROW, COL);
			while (1)
			{
				printf("玩家下棋\n");
				playermove(arr, ROW, COL);
				displayboard(arr, ROW, COL);
				b = is_win(arr,ROW,COL);
				if (b == '*')
				{
					printf("玩家胜利\n");
					break;
				}
				else if (b == 's')
				{
					printf("和棋，游戏结束\n");
					break;
				}
				else
				{
					printf("电脑下棋\n");
					computermove(arr, ROW, COL);
					displayboard(arr, ROW, COL); 
					b = is_win(arr, ROW, COL);
					if (b == '+')
					{
						printf("电脑胜利\n");
						break;
					}

				}
			}
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;

		}




	}
		while(a != 2);

return 0;
}