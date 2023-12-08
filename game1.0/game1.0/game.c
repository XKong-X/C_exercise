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
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
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
		printf("请输入坐标:>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)//坐标合法
		{
			//判断坐标是否未被使用，未使用则成功下棋并跳出，否则重新输入直到下棋成功
			if (board[i-1][j-1]==' ')
			{
				board[i-1][j-1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用,请重新输入!\n");
			}

		}
		else
		{
			printf("坐标非法,请重新输入!\n");
		}
	}
}