#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
全局变量，静态变量都是放在静态区的
全局变量，静态变量不初始化的时候，默认会被初始化位0
局部变量，是放在栈区的，不初始化，默认值是随机值，如在vs中默认为0xcccccccc

sizeof这个操作符计算返回的结果是size_t类型的，是无符号整形的
int i = -1;
if(i>sizeof(i))//这里i被提升为无符号整形后大于4
*/





//统计二进制中1的个数
int count_num_of_1()
{
	int count = 0;
	while (n)
	{
		n = n & n - 1;//每次n&n-1 都会去掉二进制中最右边的1
		count++;
	}
	//类推，如果要判断一个数是不是2的n次方
	//if((n&(n-1))==0)

	return count;
}

//两个int(32位)整数m和n的二进制表达中，有多少个位不同？
int count_diff_bit(int m, int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count++;
		}
	}

	return count;
}
int count_diff_bit_2(int m, int n)
{
	int count = 0;
	int ret = m ^ n;
	//统计一下ret中二进制位有几个1
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}

	return count;
}

//分别打印一个整数二进制序列中的所有偶数位和奇数位
void print_num(int n)
{
	int i = 0;
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
}
//打印一个交叉的*号,多组输入
void print_X()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					printf("*");
				else if ((i + j) == (n - 1))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
}

//获取某一年中某一月的天数,多组输入
int is_leap_year(int y)
{
	return (((y % 4 == 0) && y % 100 != 0) || (y % 400 == 0));
}
int day_of_mounth()
{
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &y, &m) == 2)
	{
		int d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
	}

	return 0;
}
int main()
{

	return 0;
}