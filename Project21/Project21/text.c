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
			printf("��ʼ��Ϸ\n");
			char arr[ROW][COL] = { 0 };
			board(arr, ROW, COL);
			displayboard(arr, ROW, COL);
			while (1)
			{
				printf("�������\n");
				playermove(arr, ROW, COL);
				displayboard(arr, ROW, COL);
				b = is_win(arr,ROW,COL);
				if (b == '*')
				{
					printf("���ʤ��\n");
					break;
				}
				else if (b == 's')
				{
					printf("���壬��Ϸ����\n");
					break;
				}
				else
				{
					printf("��������\n");
					computermove(arr, ROW, COL);
					displayboard(arr, ROW, COL); 
					b = is_win(arr, ROW, COL);
					if (b == '+')
					{
						printf("����ʤ��\n");
						break;
					}

				}
			}
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;

		}




	}
		while(a != 2);

return 0;
}