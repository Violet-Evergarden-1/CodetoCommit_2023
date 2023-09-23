#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

// ��ʼ������
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

//��ӡ���� 
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

void PlayerMove(char board[ROW][COL],int row,int col)//����ƶ�
{
	printf("�������\n");
	while (1)
	{
		printf("���������꣬����3 3->\n");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//�ж������Ƿ��������
	
			if (x <= ROW && y <= COL && x>0 && y > 0)
			{
				if (board[x - 1][y - 1] == ' ')
				{
					board[x - 1][y - 1] = '*';
					break;
				}
				else
					printf("���걻ռ�ã�����������\n");
			}
			else
				printf("����Ƿ�������������\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������\n");
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
	//��
	for (i = 0; i < row; i++)
	{
		
		for (j = 0; j < col-2; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] 
				&& board[i][j]!=' ')
				return board[i][j];
		}
	}
	//��
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row - 2; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	//�Խ���
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
	//�Ƿ�ƽ��
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
		printf("ƽ��\n");
		break;
	case '*':
		printf("���Ӯ\n");
		break;
	case '#':
		printf("����Ӯ\n");
	}
}