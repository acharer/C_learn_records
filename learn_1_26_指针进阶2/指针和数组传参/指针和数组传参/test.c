#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() 
//{
//	int arr[5];//��������
//	int* parr1[10];//����ָ������
//	int(*parr2)[10];//����ָ�룬����ָ��ָ������Ϊ int [10]������
//	int(*parr3[10])[5];//�������ָ�������
//
//	return 0;
//}

//һά���鴫��
//void test(int arr[])//��ȷ
//{}
//void test(int arr[10])//��ȷ
//{}
//void test(int *arr)//��ȷ
//{}
//void test2(int *arr[20])//��ȷ
//{}
//void test2(int **arr)//��ȷ
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//��ά���鴫��
void test(int arr[3][5])//��ȷ
{}
void test(int arr[][])//����
{}
void test(int arr[][5])//��ȷ
{}
void test(int *arr)//����
{}
void test(int* arr[5])//����
{}
void test(int (*arr)[5])//��ȷ
{}
void test(int **arr)//����
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//��ά���鴫��ʱ���������ǵ�һ�еĵ�ַ
}

//����Ǻ����Ĳ���������ָ��,�ܴ�ʲô����
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
//����Ǻ����Ĳ���������ָ��,�ܴ�ʲô����
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