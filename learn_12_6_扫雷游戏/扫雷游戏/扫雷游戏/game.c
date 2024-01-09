#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void init_board(char board[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------扫雷游戏-------------\n");
	for (j = 0; j <= row; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//雷的横纵坐标都是1-9
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	//int i = 0;
	//int j = 0;

	//unsigned long count = 0;
	//for (i = x - 1; i <= x + 1; i++)
	//{
	//	for (j = y - 1; j <= y + 1; j++)
	//	{
	//		count += board[i][j];
	//	}
	//}

	//return (count - 8 * '0');
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x - 1][y + 1] +
		board[x][y] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y] +
		board[x + 1][y - 1] +
		board[x + 1][y + 1] - 9 * '0');
}

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//找到非雷的个数
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入要排查的坐标:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("该位置已经排查过了，不能重复排查\n");
			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				display_board(mine, ROW, COL);
				break;
			}
			else//如果不是雷
			{
				win++;
				//统计mine数组中坐标x,y周围有几颗雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';//转换成数字字符显示
				display_board(show, ROW, COL);

			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		display_board(mine, ROW, COL);
	}
	
}