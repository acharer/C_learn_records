#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//ÿ�ε��ú���������ջ�������ڴ�ռ�
//�ݹ��������
// 1.����������������������ʱ�ܹ������ݹ�
// 2.ÿ�εݹ�󣬱���Խ��Խ�ӽ������������
//
void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}
//�ݹ�ʵ��n�Ľ׳�
int fac_1(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
		return num * fac_1(num - 1);
}
//�ǵݹ�ʵ��n�Ľ׳�
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

//�ݹ����n��쳲�������
int fib(int n)
{
	if (n == 3)
		count++;//�����ӡcount�����Կ�������39088169�ε�����쳲��������������40��쳲�������ʱ��
	if (n <= 2)//��Ȼ������ⲻ�ʺ��õݹ�ķ�ʽ
		return;
	else
		return fib(n - 1) + fib(n - 2);
}
//�������n��쳲�������
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
		return	1 + my_strlen(arr + 1);//������arr++,��Ϊarr++����ʹ�ã����һ
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