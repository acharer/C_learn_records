#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print1(int arr[3][5], int r, int c);
void print2(int(*p)[5], int r, int c);


int main()
{
	char* p = "abcdef";//这里是把字符串首字符a的地址，赋值给了p

	const char* p1 = "abcdef";//常量字符串在内存中只存在一份，大家共同使用
	const char* p2 = "abcdef";

	if (p1 == p2)
	{
		printf("p1==p2\n");
	}
	else
	{
		printf("p1!=p2\n");
	}
	printf("p1=%p\n");
	printf("p2=%p\n");

	int arr1[] = { 1,2,3,4,5};
	int arr2[] = { 2,3,4,5,6};
	int arr3[] = { 3,4,5,6,7};

	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			//*(p+i) --> p[i]
			//这两种写法是等价的
			printf("%d ",*(parr[i]+j));
			//printf("%d ", parr[i][j])；
		}
	}
	printf("\n");

	int arr[10] = { 0 };
	int* p31 = arr;//这里p31存的是数组元素的首地址
	int(*p32)[10] = &arr;//数组指针，p3是指针，指向int [10]类型的数组,这里存放的是整个数组的地址
	//两个在使用时，加减运算的步长不一样


	int err[] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p33)[10] = &err;//这里的10不能跟上面一样省略

	for(i=0;i<10;i++)
	{
		printf("%d ", *(*p33 + i));
	}
	printf("\n");

	int arr4[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr4, 3, 5);
	print2(arr4, 3, 5);

	return 0;
}

//当接收参数为二维数组时,二维数组的数组名指的是第一行的地址
void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}

void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

//数组名讨论
void func(void)
{
	//数组名通常表示的都是数组首元素的地址
	// 但是有2个例外：
	// 1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
	// 2.&数组名，这里的数组名表示的依然是整个数组，所以&数组名取出的是整个数组的地址
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);//相差4

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);//相差4

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//相差40

}