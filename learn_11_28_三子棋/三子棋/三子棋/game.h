#pragma once

#define ROW 3 //棋盘行数
#define COL 3 //棋盘列数

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);

//打印棋盘
void display_board(char board[ROW][COL], int row, int col);

//玩家下棋
void player_move(char board[ROW][COL], int row, int col);

//电脑下棋
//找没有下棋的位置随机下棋
void computer_move(char board[ROW][COL], int row, int col);

//判断输赢或平局
char is_win(char board[ROW][COL], int row, int col);

//判断棋盘满不满
int is_full(char board[ROW][COL], int row, int col);
