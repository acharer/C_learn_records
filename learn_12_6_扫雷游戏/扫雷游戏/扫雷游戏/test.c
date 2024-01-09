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
	char mine[ROWS][COLS] = { 0 };//��Ų��úõĵ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�����ʾ���û����Ų���Ϣ
	//��ʼ�����������Ϊָ������
	//mine ������û�в����׵�ʱ����'0'
	init_board(mine, ROWS, COLS, '0');
	//show ������û���Ų��׵�ʱ����'*'
	init_board(show, ROWS, COLS, '*');

	//������
	set_mine(mine, ROW, COL);

	//display_board(mine,ROW,COL);
	display_board(show, ROW, COL);

	//�Ų���
	find_mine(mine, show,  ROW, COL);
}

int main()
{
	int input = 0;
	//������������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);





	return 0;
}