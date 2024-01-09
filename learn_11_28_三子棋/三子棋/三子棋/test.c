#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
void menu()
{
	printf("*************************************\n");
	printf("********   1.play  0.exit   *********\n");
	printf("*************************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输如错误\n");
				break;
		}

	} while(input);


	return 0;
}