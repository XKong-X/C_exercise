#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("******  0.exit  ******\n");
	printf("**********************\n");
}
void game()
{
	char board[ROW][COL];
	//��ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//չʾ����
		DisplayBoard(board, ROW, COL);
		//��������
	}
}
int main()
{
	int input;
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