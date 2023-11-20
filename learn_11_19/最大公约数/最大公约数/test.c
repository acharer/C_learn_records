#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int temp = 0;

	scanf("%d %d", &num1, &num2);
	while (temp = num1 % num2)
	{
		num1 = num2;
		num2 = temp;
	}

	printf("%d \n", num2);
	return 0;
}