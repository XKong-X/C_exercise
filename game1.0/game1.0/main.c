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
	//初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		//展示棋盘
		DisplayBoard(board, ROW, COL);
		//电脑下棋
	}
}
int main()
{
	int input;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				printf("游戏开始！\n");
				game();
				break;
			case 0:
				printf("游戏结束！\n");
				break;
			default:
				printf("范围错误，请重新输入！\n");
				break;
		}
	} while (input);
	return 0;
}