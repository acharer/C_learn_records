#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//while循环中的
//break是用于永久的终止循环
// continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
//
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
		{
			i++;
			continue;
		}
		printf("%d ", i);
		i++;

		if (8 == i)
		{
			break;
		}
		
	}

	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl+z退出
	{
		putchar(ch);
	}

	return 0;
}