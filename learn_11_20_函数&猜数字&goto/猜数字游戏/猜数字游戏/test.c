#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//电脑产生一个随机数（1-100）
// 猜数字
// 猜大了
// 猜小了
// 猜中了、结束
//

void menu()
{
	printf("*****************************\n");
	printf("***********1.Play************\n");
	printf("***********0.Exit************\n");
	printf("*****************************\n");
}

void game()
{
	int guess = 0;
	//生成随机数
	int ret = rand()%100+1;//0~RAND_MAX(32767),取模100后的范围就是1~100
	//猜数字
	printf("请开始猜数字");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//使用rand函数之前，应该先用srand，参数为随机整形
	                                //设置随机数的起点

	do
	{
		menu();
		printf("请输入：>\n");
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
			printf("请输入1或2，选择开始或退出游戏\n");
			break;
		}
	} while (input);
	return 0;
}