#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//函数指针数组
	int (*pfArr[5])(int, int) = { 0 };

	//指向 函数指针数组 的指针
	int (*(*ppfArr)[5])(int, int) = &pfArr;

	return 0;
}