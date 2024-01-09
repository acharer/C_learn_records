#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("**********************************\n");
	printf("********    1.play    ************\n");
	printf("********    0.exit    ************\n");
	printf("**********************************\n");

}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的地雷的信息
	char show[ROWS][COLS] = { 0 };//存放显示给用户的排查信息
	//初始化数组的内容为指定内容
	//mine 数组在没有布置雷的时候都是'0'
	init_board(mine, ROWS, COLS, '0');
	//show 数组在没有排查雷的时候都是'*'
	init_board(show, ROWS, COLS, '*');

	//设置雷
	set_mine(mine, ROW, COL);

	//display_board(mine,ROW,COL);
	display_board(show, ROW, COL);

	//排查雷
	find_mine(mine, show,  ROW, COL);
}

int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);





	return 0;
}