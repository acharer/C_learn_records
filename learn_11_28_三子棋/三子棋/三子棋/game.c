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
		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割信息
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
		printf("玩家请下棋:>\n");
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//坐标合法性判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已占用，请选择其他位置");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	
}
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
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
//玩家嬴 - '*'
//电脑嬴 - '#'
//平局 - 'Q'
//继续 - 'C'
char is_win(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][i] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//没有人嬴，就要判断平局
	if (is_full(board, row, col))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}
void game()
{
	int ret = 0;
	char board[ROW][ROW] = { 0 };//棋盘
	//初始化棋盘的函数
	init_board(board,ROW,COL);
	//打印棋盘
	display_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}

}


