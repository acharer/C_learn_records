#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int a = 10;
	//int* p = &a;

	////free(p);//报错
	////free函数是用来释放动态开辟的内存
	////1.如果参数ptr指向的空间不是动态开辟的，拿free函数的行为是未定义的
	////2.如果参数ptr是NULL指针，则函数什么都不做 
	//p = NULL;

	//calloc = malloc+memset

	//int* p = (int*)calloc(10, sizeof(int));
	//if (p == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////打印
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
	////释放
	//free(p);
	//p = NULL;

	//

	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	//1 2 3 4 5 6 7 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//扩容
	int* ptr = (int *)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
		ptr = NULL;
	}
	//使用
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//释放
	free(p);
	p = NULL;

	//realloc(NULL,40)等价与malloc(40)

	return 0;
}