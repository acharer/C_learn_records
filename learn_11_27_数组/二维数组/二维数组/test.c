#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[3][4];
	char str1[5][10];


	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9,10};//不够的补0
	int arr3[4][4] = { {1,2},{3,4},{5,6} };

	int arr4[][3] = { 1,2,3,4,5,6,7,8,9,10 };//可以省略行数，但是不能省略列数

	int arr5[] = { 1,2,3,4,5,6 };

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr5[i]);//一维数组越界
	}
	printf("\n----------------------------------------\n");
	int arr6[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%d ", arr6[i][j]);//二维数组越界
		}
	}

	return 0;
}