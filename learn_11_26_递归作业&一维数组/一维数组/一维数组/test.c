#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//数组 - 一组相同类型元素的集合
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	char ch[5];
	double data1[20];
	double data2[15 + 5];

	//下面的代码只能在支持C99标准的编译器上编译（如GCC）gcc test.c -std=c99
	//int n = 10;
	//scanf("%d", n);
	//int arr2[n];这种数组是不能初始化的
	//在C99标准之前，数组大小必须是常量或常量表达式
	//C99之后，数组的大小可以是变量，为了支持边长数组

	int arr1[10] = { 1,2,3 };//不完全初始化，剩余的元素默认初始化为0
	int arr2[] = { 1,2,3 };//数组大小为3个元素

	char ch1[10] = {'a','b','c'};
	//a b c 0 0 0 0 0 0 0
	char ch2[10] = "abc";//跟上面结果是一样的，但是性质不一样
	//a b c \0 0 0 0 0 0 0 
	char ch3[] = { 'a','b','c' };
	//a b c
	char ch4[] = "abc";
	//a b c \0
	

	//[] - 下标引用操作符
	int sz = sizeof(arr) / sizeof(arr[0]);


	return 0;
}