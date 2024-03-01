#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//1.对NULL指针的解引用操作
void test1()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//如果动态内存分配失败，p的值为NULL，解引用有问题
	free(p);
}
//2.对动态开辟空间的越界访问
int test2()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i <= 10; i++)//上面只开辟了10个整型空间，这里越界了
	{
		p[i] = i;
	}
	free(p);
	p = NULL;

	return 0;
}
//3.对非动态开辟空间使用free释放
void test3()
{
	int a = 10;
	int* p = &a;
	//....

	free(p);
	p = NULL;
}
//4.使用free释放一块动态开辟内存的一部分
int test4()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//使用
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p = i;
		p++;
	}
	//释放
	free(p);//上面的p已经被改变了，不再指向动态分配内存的起始位置
	p = NULL;

	return 0;

}
//5.对同一块动态内存多次释放
void test5()
{
	int* p = (int*)malloc(40);
	//....
	free(p);
	p = NULL;

	//...
	free(p); 
}
//6.动态开辟内存忘记释放（内存泄露）
void test6()
{
	int* p = (int*)malloc(100);
	//...

	int flag = 0;
	scanf("%d", &flag);
	if (flag == 5)
	{
		return;//如果这里返回了，就会导致free没有被执行
	}

	free(p);
	p = NULL;
}
int test6_1()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return p;
	}
	//...
	return p;
}
int test6_2()
{
	int* ret = test6_1();
	//忘记释放了
	return 0;
}

int main()
{

	return 0;
}