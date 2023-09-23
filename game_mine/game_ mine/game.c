#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("|");
	for (i = 0; i <= row; i++)
	{
		printf("-----|");
	}
	printf("\n|");
	for (i = 0; i <= row; i++)
	{
		printf(" %2d  |", i );
	}
	printf("\n|");
	for (i = 0; i <= row; i++)
	{
		printf("-----|");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("| %2d  |", i);
		for (j = 1; j <= col; j++)
		{
			printf("  %c  |", board[i][j]);
		}
		printf("\n|");
		for (j = 0; j <= col; j++)
		{
			printf("-----|");
		}
		printf("\n");
	}
}



void SetMine(char board[ROWS][COLS], int row, int col)
{
	int num = MINE_NUM;
	while (num)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			num--;
		}
	}
}
 
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win=0;
	while (win < ROW * COL - MINE_NUM)
	{
		printf("输入查找坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("失败，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else if (mine[x][y] == '0')
			{
				ExposeMine(mine, show, x, y,&win);
				DisplayBoard(show, ROW, COL);
			}
		}
		else
			printf("坐标非法，重新输入\n");
	}
		if (win == ROW * COL - MINE_NUM)
		{
			printf("成功\n");
			DisplayBoard(mine, ROW, COL);
		}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int a = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x][y - 1]
		+ mine[x + 1][y] + mine[x][y + 1] + mine[x - 1][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y + 1]-8*'0';
	return a;
}

void ExposeMine(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y, int* win)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int i = x;
		int j = y;
		int a = GetMineCount(mine, i, j);
		if (a == 0)
		{
			show[i][j] = ' ';
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (show[i][j] == '*')
						ExposeMine(mine, show, i, j, win);
				}
			}
		}
		else
			show[i][j] = a + '0';

		(*win)++;
	}
}