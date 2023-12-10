#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("************************\n");
	printf("******   1.play   ******\n");
	printf("******   0.exit   ******\n");
	printf("************************\n");
}

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-------   ɨ����Ϸ   -------\n");
	
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	int count = 0;
	while (count<EASY_COUNT)
	{
		i = rand() % row + 1; j = rand() % col + 1;
		if (board[i][j] != '1')
		{
			board[i][j] = '1';
			count++;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int i, int j)
{
	return (mine[i - 1][j] + mine[i - 1][j - 1] + mine[i][j - 1] + mine[i + 1][j - 1] + 
		mine[i + 1][j] + mine[i + 1][j + 1] + mine[i][j + 1] + mine[i - 1][j + 1] - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	int win = 0;
	while (win < row*col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &i, &j);
		//�ж������Ƿ�Ϸ�
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//�ж����괦�Ƿ�����
			if (mine[i][j] == '1')
			{
				printf("�㱻ը���ˣ�\n");
				//չʾ�׵ķֲ����
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else//û�ף���չʾ��Χ�˸�������׵�����
			{
				show[i][j] = GetMineCount(mine, i, j) + '0';
				//չʾ���º�Ľ���
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ���\n");
		DisplayBoard(mine, ROW, COL);
	}
}