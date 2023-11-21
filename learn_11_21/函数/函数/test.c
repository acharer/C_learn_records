#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 1.写一个函数，可以判断一个数是不是素数,是就返回1,不是就返回0
int is_prime(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)//sqrt()是开平方函数，依赖于math.h
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

// 2.写一个函数，可以判断一年是不是闰年,是就返回1,不是就返回0
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//数组传参，实际上传递的是数组首元素的地址，而不是整个数组
// 这里的形参int arr[]看上去是数组，实际上是指针
// 3.写一个函数，实现一个整形有序数组的二分查找,找到就返回下标,找不到就返回-1
int binary_search(int arr[], int num, int element_num)
{
	int left = 0;
	int right = element_num - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if(arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}
// 4.写一个函数，每调用一次这个函数，就会将num的值增加1
void add(int* p)
{
	(*p)++;
}

int main()
{
	//打印1~200之间的素数
	int i = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d", count);
	printf("\n**********************************************\n");
	//打印1000~2000之间的闰年
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	printf("\n**********************************************\n");
	//在数组arr[]中找num，并返回下标
	int num = 75;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,15,16,17,19,25,36,72,91 };
	int element_num = sizeof(arr) / sizeof(arr[0]);
	int flag = binary_search(arr, num, element_num);
	if (flag != -1)
	{
		printf("找到了，下标为 %d ", flag);
	}
	else
	{
		printf("没找到");
	}
	printf("\n**********************************************\n");

	int times = 0;
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	return 0;
}
//函数可以互相调用
//函数可以嵌套
//函数可以链式访问 printf("%d", printf("%d", printf("%d", 43)))
//函数不写返回值的时候，默认返回类型是int
/*
int main(void)明确的说明，main函数不需要参数

但是本质上main函数是有参数的
int main(int argc,char* argv[],char *envp[])

int main(void)
{

}

*/