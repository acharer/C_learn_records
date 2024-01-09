#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 数组名确实能够表示首元素的地址
// 但是有2个例外：
// 1.sizeof(数组名),这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//


//二维数组的数组名，也表示数组首元素的地址，但是表示的是arr[0][j]
// arr + 1 就是arr[1][j]的地址，即跳过了一行

int main()
{
	int arr[10];
	printf("%p\n", arr);//arr就是首元素的地址
	printf("%p\n", arr+1);//第二个元素的地址
	printf("------------------------------------\n");
	printf("%p\n", &arr[0]);//首元素地址
	printf("%p\n", &arr[0]+1);//第二个元素的地址
	printf("------------------------------------\n");
	printf("%p\n", &arr);//整个数组的地址
	printf("%p\n", &arr+1);//跳过了整个数组的地址
	printf("------------------------------------\n");
	int n = sizeof(arr);//40
	printf("%d\n", n);

	int arr1[3][4];
	int sz = sizeof(arr1);
	printf("%d \n", sz);//48,整个数组大小
	printf("%d\n", sizeof(arr1) / sizeof(arr1[0]));//行数  3
	printf("%d\n", sizeof(arr1[0]) / sizeof(arr1[0][0]));//列数  4


	return 0;
}