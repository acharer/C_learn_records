#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

extern int sum;

int main()
{
	int num1 = 0, num2 = 0;

	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;

	printf("两个整数之和 sum = %d\n", sum);
	return 0;
}