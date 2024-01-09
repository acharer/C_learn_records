#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void bubble_sort(int* arr, int size)//或者参数直接写成数组 int arr[]
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//把数组的数据按升序排列
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int size = sizeof(arr) / sizeof(arr[0]);//一定不能把size放在函数里求
	//冒泡排序算法，对数组进行排序
	bubble_sort(arr, size);

	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}