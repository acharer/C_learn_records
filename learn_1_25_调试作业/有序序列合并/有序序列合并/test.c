#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr1[10];
	int arr2[10];
	int arr3[20];
	int i = 0;
	//输入10个整数
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	//输入10个整数
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//合并
	int j = 0;
	int k = 0;
	int r = 0;
	while (j < 10 && k < 10)
	{
		if (arr1[j] < arr2[k])
		{
			arr3[r++] = arr1[j];
			j++;
		}
		else
		{
			arr3[r++] = arr2[k];
			k++;
		}
	}
	if (j < n)
	{
		for (; j < 10; j++)
		{
			arr3[r++] = arr1[j];
		}
	}
	else
	{
		for (; k < 10; k++)
		{
			arr3[r++] = arr2[k];
		}
	}	

	for (i = 0; i < m + n; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}