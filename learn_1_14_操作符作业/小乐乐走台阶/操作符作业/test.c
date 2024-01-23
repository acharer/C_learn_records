#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//小乐乐走台阶
//小乐乐上课需要走n阶台阶，他每次可以走一阶也可以走两阶，求一共有多少种走法
int fib(int n)
{
	if (n <= 2)
		return n;
	else
		return fib(n - 1) + fib(n - 2);

}

int main()
{
	int n = 0;
	//输入
	scanf("%d", &n);
	//计算
	int m = fib(n);
	//输出
	printf("%d\n", m);

	return 0;
}