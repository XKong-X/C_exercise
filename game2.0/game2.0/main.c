#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//��ʼ��
	//mineΪȫ'0'
	//showΪȫ'*'
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//����
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//������
	 
	//����
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("��Ϸ��ʼ��\n");
				game();
				break;
			case 0:
				printf("��Ϸ������\n");
				break;
			default:
				printf("��Χ�������������룡\n");
				break;
		}
	} while (input);
	return 0;
}