#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct S
{
	int data[1000];
	int num;
};
//传值调用
void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ss.data[i]);
	}
	printf("%d\n", ss.num);
}
//传地址
void print2(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("%d\n", ps->num);
}

int main()
{
	struct S s = { {1,2,3},100 };
	
	print1(s);//传值调用
	print2(&s);//传地址
	//结论：结构体传参的时候，要传结构体的地址
	return 0;
}