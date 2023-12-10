#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//初始化
	//mine为全'0'
	//show为全'*'
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//测试用
	 
	//排雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input;
	srand((unsigned int)time(NULL));
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