#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//形式参数
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

void swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前a=%d,b=%d", a, b);
	//a和b叫实参
	Swap(a, b);
	printf("交换后a=%d,b=%d", a, b);
	return 0;
}