#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 5
#define COL 5

#define ROWS ROW+2
#define COLS COL+2

#define MINE_NUM 5

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int GetMineCount(char mine[ROWS][COLS], int x, int y);
void ExposeMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win);