#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;

	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");

	//表达式求值的时候会整型提升
	char d = 1;
	printf("%u\n", sizeof(d));//1
	printf("%u\n", sizeof(+d));//4
	printf("%u\n", sizeof(-d));//4
	//算数转换，两个类型不同，是会向更大的类型转换

	return 0;
}