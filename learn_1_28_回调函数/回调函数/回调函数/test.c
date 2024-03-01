#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/*回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）
作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，我们
就说这是回调函数。回电函数不是由该函数的实现方直接调用，而是在特定的
时间或条件发生时，由另外的一方调用的，用于对该事件或条件进行响应*/

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组已经排好序
		//一趟冒泡排序的过程
		int j = 0;
		for(j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort2(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//假设数组已经排好序
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width,(char*)base + (j+1)*width)>0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
//qsort
//void qsort(void* base,
//			size_t num,
//			size_t width,
//			int (*cmp)(const void* e1, const void* e2)
//			);
//__cdecl - 函数调用约定

int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2()
{
	//测试使用qsort来排序结构数据
	struct Stu  s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);

	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test4()
{
	//测试使用qsort来排序结构数据
	struct Stu  s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}