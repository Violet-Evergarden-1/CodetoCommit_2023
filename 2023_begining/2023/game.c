#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘 
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i < 0; i < row; i++)
	{
		int j = 0;
		for (j < 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("---");
			for (j = 0; j < row -1; j++)
			{
				printf("|---");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL],int row,int col)//玩家移动
{
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标，例如3 3->\n");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//判断坐标是否可以落子
	
			if (x <= ROW && y <= COL && x>0 && y > 0)
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
					printf("坐标被占用，请重新输入\n");
			}
			else
				printf("坐标非法，请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//行
	for (i = 0; i < row; i++)
	{
		
		for (j = 0; j < col-2; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] 
				&& board[i][j]!=' ')
				return board[i][j];
		}
	}
	//列
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 2; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//对角线
	for (i = 0; i < row - 2; i++)
	{
		for(j = 0; j< col -2; j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < col - 1; j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//是否平局
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'c';
		}
	}
	return 0;
}

void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while(1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	switch (ret)
	{
	case 0:
		printf("平局\n");
		break;
	case '*':
		printf("玩家赢\n");
		break;
	case '#':
		printf("电脑赢\n");
	}
}