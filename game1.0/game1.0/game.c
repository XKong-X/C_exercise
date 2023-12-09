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
		//打印数据和“|”
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印“---”和“|”
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

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("电脑下棋:>\n");
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

//（该判断方法在棋盘大于3时不完整，需要完善）
char IsWin(char board[ROW][COL], int row, int col)
{

	//赢(直接返回坐标处的字符即可判断是谁赢)
	int i;
	//判断行
	for (i = 0; i < row; i++)
	{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return board[i][1];
			}
	}
	//判断列
	for (i = 0; i < row; i++)
	{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			{
				return board[1][i];
			}
	}
	//判断对角线
	if (board[1][1] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return board[1][1];
	}
	if (board[1][1] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		return board[1][1];
	}
	//平局
	if (IsFull(board,row,col))
		return 'Q';
	//继续
	return 'C';
}