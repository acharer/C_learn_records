#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 < num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1 < num3)
	{
		int temp = num1;
		num1 = num3;
		num3 = temp;
	}
	if (num2 < num3)
	{
		int temp = num2;
		num2 = num3;
		num3 = temp;
	}
	
	printf("%d %d %d", num1, num2, num3);


	return 0;
}