#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//递归方式实现打印一个整数的每一位
void func_1(int num)
{
	if (num > 9)
	{
		func_1(num / 10);
	}
	printf("%d ", num % 10);
}

//分别用递归和非递归实现求n的阶乘（不考虑溢出问题）
int func_2_1(int num)
{
	//非递归
	int i = 0;
	int tem = 1;
	for (i = 1; i <= num; i++)
	{
		tem = i * tem;
	}
	return tem;
}
int func_2_2(int num)
{
	//递归
	if (num > 1)
	{
		return num * func_2_2(num - 1);
	}
	return 1;
	
}

//分别用递归和非递归实现strlen
int func_3_1(char* arr)
{
	//非递归
	int count = 0;
	while(*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int func_3_2(char* arr)
{
	//递归
	if (*arr != '\0')
	{
		return 1 + func_3_2(arr + 1);
	}
	return 0;
}


//分别用递归和非递归实现字符串逆序
char* func_4_1(char* arr)
{
	//非递归
	char* left = arr;
	char* right = arr + strlen(arr) - 1;//函数内可以用strlen求参数数组长度但不能用sizeof

	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;
	}
	return arr;
}
void func_4_2(char* arr)
{
	char temp = *arr;
	int len = strlen(arr);
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
	{
		func_4_2(arr + 1);
	}
	*(arr + len - 1) = temp;
}

//用递归实现计算一个数的每位之和
int func_5_1(int num)
{
	if (num > 9)
	{
		return num % 10 + func_5_1(num / 10);
	}
	return num;
}

//用递归实现n的k次方
double func_6_1(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k >= 1)
	{
		return n * func_6_1(n, k - 1);
	}
	else
		return 1.0 / func_6_1(n, -k);
}

//分别用递归和非递归实现求第n个斐波那契数
int func_7_1(int n)
{
	//非递归
	int a = 1;
	int b = 1;
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
int func_7_2(int n)
{
	if (n > 2)
	{
		return func_7_2(n - 1) + func_7_2(n - 2);
	}
	return 1;
}

int main()
{
	printf("递归方式实现打印一个整数的每一位\n");
	func_1(1234);
	printf("\n-----------------------------------------\n");

	printf("分别用递归和非递归实现求n的阶乘\n");
	printf("%d\n", func_2_1(5));
	printf("%d\n", func_2_2(5));
	printf("-----------------------------------------\n");

	printf("分别用递归和非递归实现strlen\n");
	printf("%d\n", func_3_1("abcdef"));
	printf("%d\n", func_3_2("abcdef"));
	printf("-----------------------------------------\n");

	printf("分别用递归和非递归实现字符串逆序\n");
	char arr[] = "abcdef";
	printf("%s\n", func_4_1(arr));
	char arr2[] = "abcdef";
	func_4_2(arr2);
	printf("%s\n", arr2);
	printf("-----------------------------------------\n");

	printf("用递归实现计算一个数的每位之和\n");
	printf("%d\n", func_5_1(1234));
	printf("-----------------------------------------\n");

	printf("用递归实现n的k次方\n");
	printf("%lf\n", func_6_1(4,2));
	printf("-----------------------------------------\n");

	printf("分别用递归和非递归实现求第n个斐波那契数\n");
	printf("%d\n", func_7_1(10));
	printf("%d\n", func_7_2(10));
	return 0;
}