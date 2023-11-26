#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//编写函数，求1到100的所有整数中出现多少的数字9
void fuc_1(void)
{
	int count = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d ", count);
}

//分数求和，计算1/1-1/2+1/3-1/4+1/5.....+1/99-1/100
void fuc_2(void)
{
	double sum = 0;
	int i = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
		
	}
	printf("\n%lf\n", sum);

}

//求10个整数中的最大值
void fuc_3(void)
{
	int i = 0;

	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for ( i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	printf("\n%d\n ", max);
}
//输出9*9乘法口诀表
void fuc_4(void)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d=%-2d\t",i, j, i * j);//%2d,打印两位，不够的用空格补上，右对齐
		}									//%-2d,左对齐
		printf("\n");
	}
}

int main()
{
	
	fuc_1();
	fuc_2();
	//fuc_3();
	fuc_4();
	return 0;
}