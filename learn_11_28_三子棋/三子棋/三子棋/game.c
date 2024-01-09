#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"



void init_board(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���Ϣ
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}
}
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������:>\n");
		printf("����������:>");
		scanf("%d %d", &x, &y);
		//����Ϸ����ж�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ����ռ�ã���ѡ������λ��");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	
}
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row; //0~2
		y = rand() % col; //0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//����� - '*'
//������ - '#'
//ƽ�� - 'Q'
//���� - 'C'
char is_win(char board[ROW][COL], int row, int col)
{
	//�ж���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][i] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж���
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//û����������Ҫ�ж�ƽ��
	if (is_full(board, row, col))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}
void game()
{
	int ret = 0;
	char board[ROW][ROW] = { 0 };//����
	//��ʼ�����̵ĺ���
	init_board(board,ROW,COL);
	//��ӡ����
	display_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}


