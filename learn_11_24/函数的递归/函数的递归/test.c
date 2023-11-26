#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//每次调用函数都会向栈区申请内存空间
//递归的条件：
// 1.必须有限制条件，不满足时能够跳出递归
// 2.每次递归后，必须越来越接近这个限制条件
//
void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}
//递归实现n的阶乘
int fac_1(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
		return num * fac_1(num - 1);
}
//非递归实现n的阶乘
int fac_2(int num)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= num; i++)
	{
		ret *= i;
	}
	return ret;
}

int count = 0;

//递归求第n个斐波那契数
int fib(int n)
{
	if (n == 3)
		count++;//如果打印count，可以看到求了39088169次第三个斐波那契数（在求第40个斐波那契数时）
	if (n <= 2)//显然这个问题不适合用递归的方式
		return;
	else
		return fib(n - 1) + fib(n - 2);
}
//迭代求第n个斐波那契数
int fib2(int n)
{
	int a = 1;
	int b = 2;
	int c = 0;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return	1 + my_strlen(arr + 1);//不能用arr++,因为arr++是先使用，后加一
	}
	else
		return 0;
}

int main()
{
	char arr[] = "abcedf";
	//printf("%d \n",sizeof(arr));//4
	//printf("%d \n", strlen(arr));//3


	//printf("%d\n", my_strlen(arr));
	printf("%d\n", fac_1(5));
	printf("%d\n", fac_2(5));

	return 0;
}