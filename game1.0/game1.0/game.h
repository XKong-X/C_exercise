#pragma once

#include <stdio.h>

#define ROW 3
#define COL 3

//��ʼ��
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);