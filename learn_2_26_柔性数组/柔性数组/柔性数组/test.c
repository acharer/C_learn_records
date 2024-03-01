#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
	结构中最后一个元素允许是未知大小的数组，这就叫做柔性数组成员
*/
//第一种写法
typedef struct st_type1
{
	int i;
	int a[0];//柔性数组成员
}type_a1;
//第二种写法
typedef struct st_type2
{
	int i;
	int a[];//柔性数组成员
}type_a2;
/*
柔性数组的特点：
	结构中的柔性数组成员前面必须至少一个其他成员
	sizeof返回的这种结构大小不包括柔性数组的内存
	包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于该结构的大小
*/
void test();

struct S
{
	int n;
	int arr[];//柔性数组成员
};
int main()
{
	int sz = sizeof(struct S);
	printf("%d\n", sz);//4

	//柔性数组的使用
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		printf("malloc error\n");
		return 1;
	}

	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}

	//释放
	free(ps);
	ps = NULL;

	printf("\n");

	test();

	return 0;
}

//另一种跟柔性数组一样效果的写法
struct S2
{
	int n;
	int* arr;
};

void test()
{
	struct S2* ps2 = (struct S2*)malloc(sizeof(struct S2));
	if (ps2 == NULL)
	{
		printf("malloc error\n");
		return 1;
	}
	ps2->n = 100;
	ps2->arr = (int*)malloc(40);

	if (ps2->arr == NULL)
	{
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps2->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps2->arr[i]);
	}

	//扩容
	int* ptr = (int*)realloc(ps2->arr, 80);
	if (ptr != NULL)
	{
		ps2->arr = ptr;
		ptr = NULL;
	}

	//释放
	free(ps2->arr);
	free(ps2);
	ps2 = NULL;

}