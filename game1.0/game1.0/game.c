#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		//��ӡ���ݺ͡�|��
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ��---���͡�|��
		for (int j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i, j;
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)//����Ϸ�
		{
			//�ж������Ƿ�δ��ʹ�ã�δʹ����ɹ����岢������������������ֱ������ɹ�
			if (board[i-1][j-1]==' ')
			{
				board[i-1][j-1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ��,����������!\n");
			}

		}
		else
		{
			printf("����Ƿ�,����������!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("��������:>\n");
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col) 
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//�����жϷ��������̴���3ʱ����������Ҫ���ƣ�
char IsWin(char board[ROW][COL], int row, int col)
{

	//Ӯ(ֱ�ӷ������괦���ַ������ж���˭Ӯ)
	int i;
	//�ж���
	for (i = 0; i < row; i++)
	{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return board[i][1];
			}
	}
	//�ж���
	for (i = 0; i < row; i++)
	{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			{
				return board[1][i];
			}
	}
	//�ж϶Խ���
	if (board[1][1] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return board[1][1];
	}
	if (board[1][1] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		return board[1][1];
	}
	//ƽ��
	if (IsFull(board,row,col))
		return 'Q';
	//����
	return 'C';
}