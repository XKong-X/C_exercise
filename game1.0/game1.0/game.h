#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define ROW 3
#define COL 3

//初始化
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
//玩家赢---'*'
//电脑赢---'#'
//平局-----'Q'
//继续-----'C'
char IsWin(char board[ROW][COL], int row, int col);

//判断棋盘是否满
int IsFull(char board[ROW][COL], int row, int col);