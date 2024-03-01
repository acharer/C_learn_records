#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/*
* malloc
* calloc
* realloc
* free
*/

int main()
{
	int arr[10] = { 0 };
	//动态开辟内存
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//没有free
	//并不是说内存空间就不回收了
	//当程序退出的时候，系统会自动回收内存空间的

	free(p);
	p = NULL;

	return 0;
}