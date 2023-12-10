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
	printf("-------   扫雷游戏   -------\n");
	
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
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &i, &j);
		//判断坐标是否合法
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//判断坐标处是否有雷
			if (mine[i][j] == '1')
			{
				printf("你被炸死了！\n");
				//展示雷的分布情况
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else//没雷，则展示周围八个坐标的雷的数量
			{
				show[i][j] = GetMineCount(mine, i, j) + '0';
				//展示更新后的界面
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}