#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void func_1(int num)
{
	if (num > 9)
	{
		func_1(num / 10);
	}
	printf("%d ", num % 10);
}

//�ֱ��õݹ�ͷǵݹ�ʵ����n�Ľ׳ˣ�������������⣩
int func_2_1(int num)
{
	//�ǵݹ�
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
	//�ݹ�
	if (num > 1)
	{
		return num * func_2_2(num - 1);
	}
	return 1;
	
}

//�ֱ��õݹ�ͷǵݹ�ʵ��strlen
int func_3_1(char* arr)
{
	//�ǵݹ�
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
	//�ݹ�
	if (*arr != '\0')
	{
		return 1 + func_3_2(arr + 1);
	}
	return 0;
}


//�ֱ��õݹ�ͷǵݹ�ʵ���ַ�������
char* func_4_1(char* arr)
{
	//�ǵݹ�
	char* left = arr;
	char* right = arr + strlen(arr) - 1;//�����ڿ�����strlen��������鳤�ȵ�������sizeof

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

//�õݹ�ʵ�ּ���һ������ÿλ֮��
int func_5_1(int num)
{
	if (num > 9)
	{
		return num % 10 + func_5_1(num / 10);
	}
	return num;
}

//�õݹ�ʵ��n��k�η�
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

//�ֱ��õݹ�ͷǵݹ�ʵ�����n��쳲�������
int func_7_1(int n)
{
	//�ǵݹ�
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
	printf("�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ\n");
	func_1(1234);
	printf("\n-----------------------------------------\n");

	printf("�ֱ��õݹ�ͷǵݹ�ʵ����n�Ľ׳�\n");
	printf("%d\n", func_2_1(5));
	printf("%d\n", func_2_2(5));
	printf("-----------------------------------------\n");

	printf("�ֱ��õݹ�ͷǵݹ�ʵ��strlen\n");
	printf("%d\n", func_3_1("abcdef"));
	printf("%d\n", func_3_2("abcdef"));
	printf("-----------------------------------------\n");

	printf("�ֱ��õݹ�ͷǵݹ�ʵ���ַ�������\n");
	char arr[] = "abcdef";
	printf("%s\n", func_4_1(arr));
	char arr2[] = "abcdef";
	func_4_2(arr2);
	printf("%s\n", arr2);
	printf("-----------------------------------------\n");

	printf("�õݹ�ʵ�ּ���һ������ÿλ֮��\n");
	printf("%d\n", func_5_1(1234));
	printf("-----------------------------------------\n");

	printf("�õݹ�ʵ��n��k�η�\n");
	printf("%lf\n", func_6_1(4,2));
	printf("-----------------------------------------\n");

	printf("�ֱ��õݹ�ͷǵݹ�ʵ�����n��쳲�������\n");
	printf("%d\n", func_7_1(10));
	printf("%d\n", func_7_2(10));
	return 0;
}