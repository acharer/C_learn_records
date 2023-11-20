#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int flag = 0;
	for (int num = 100; num <= 200; num += 2)
	{
		flag = 0;
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				flag = 1;
			}
		}
		if (flag == 0)
			printf("%d\n", num);
		num++;

	}
	return 0;
}