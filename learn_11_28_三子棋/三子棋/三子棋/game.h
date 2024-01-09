#pragma once

#define ROW 3 //��������
#define COL 3 //��������

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);

//��ӡ����
void display_board(char board[ROW][COL], int row, int col);

//�������
void player_move(char board[ROW][COL], int row, int col);

//��������
//��û�������λ���������
void computer_move(char board[ROW][COL], int row, int col);

//�ж���Ӯ��ƽ��
char is_win(char board[ROW][COL], int row, int col);

//�ж�����������
int is_full(char board[ROW][COL], int row, int col);
