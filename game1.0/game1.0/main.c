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
	char board[ROW][COL] = { 0 };
	//��ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
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
				input = 2;
				break;
		}
	} while (input);
	return 0;
}