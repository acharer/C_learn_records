#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N_BALUES 5
float values[N_BALUES];
float* vp;
//  |指针-指针|  得到的是指针和指针之前的元素个数
//不是所有的指针都能相减
//指向同一块空间的2个指针才能相减

int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}

void print1()
{
	for (vp = &values[N_BALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
}
void print2()
{
	for (vp = &values[N_BALUES-1]; vp >= &values[0];vp--)
	{
		*vp = 0;
	}
}
//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
//但是不允许与指向第一个元素之前的那个内存位置的指针比较
//因此我们首选print1函数的方式


//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放的是地址

void test1(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d "), * (p + i));
	}
}
void test1(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d "), arr[i]);
	}
}
//数组传参

int mian()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);//9

	int len = my_strlen("abcdef");
	printf("%d\n", len);
	int* p = arr;


	return 0;
}