#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//写一个函数，将数组中的偶数移到数组左边，奇数移到右边
void move_odd_even(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		//从左向右找一个偶数，停下来
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		//从右向左找一个奇数，停下来
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		//交换奇数和偶数
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
	
}

//有序序列合并


int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", arr+i);
	}
	//调整
	move_odd_even(arr, sz);
	//输出
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}