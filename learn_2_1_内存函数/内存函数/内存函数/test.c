#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<memory.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//memcpy函数是用来处理不重叠内存之间的数据拷贝的
//使用memmove函数来实现，重叠内存之间的数据拷贝
void test2()
{
	int arr3[] = { 1,2,3,4,5,6,7 };
	memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

}
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	if (dest < src)
	{
		//前->后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//后->前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
void test3()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1, arr1 + 2, 20);
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 28);

	//float arr3[5] = { 1.0,2.5,3.0,5.0,6.0 };
	//float arr4[10] = {0.0};
	//memcpy(arr4, arr3, 20);
	
	test2();
	test3();
	return 0;
}