#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void bubble_sort(int* arr, int size)//���߲���ֱ��д������ int arr[]
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
	//����������ݰ���������
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int size = sizeof(arr) / sizeof(arr[0]);//һ�����ܰ�size���ں�������
	//ð�������㷨���������������
	bubble_sort(arr, size);

	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}