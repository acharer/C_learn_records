#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//%d 是打印有符号的整数（会有正负数）
//%u 是打印无符号的整数
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);



	printf("%u\n", num);

	return 0;
}