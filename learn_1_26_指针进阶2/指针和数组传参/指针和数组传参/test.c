#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() 
//{
//	int arr[5];//整形数组
//	int* parr1[10];//整形指针数组
//	int(*parr2)[10];//数组指针，数组指针指向类型为 int [10]的数组
//	int(*parr3[10])[5];//存放数组指针的数组
//
//	return 0;
//}

//一维数组传参
//void test(int arr[])//正确
//{}
//void test(int arr[10])//正确
//{}
//void test(int *arr)//正确
//{}
//void test2(int *arr[20])//正确
//{}
//void test2(int **arr)//正确
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//二维数组传参
void test(int arr[3][5])//正确
{}
void test(int arr[][])//错误
{}
void test(int arr[][5])//正确
{}
void test(int *arr)//错误
{}
void test(int* arr[5])//错误
{}
void test(int (*arr)[5])//正确
{}
void test(int **arr)//错误
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//二维数组传递时，数组名是第一行的地址
}

//如果是函数的参数部分是指针,能传什么参数
//void print(int* p)
//{}
//
//int a = 10;
//int* ptr = &a;
//int arr[10];
// 
//print(&a);
//print(ptr);
//print(arr);
//如果是函数的参数部分是指针,能传什么参数
//void test(int** p)
//{}
//
//int* p1;
//int** p2;
//int* arr[10];
// 
//test(&p1);
//test(p2);
//test(arr);