#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���� - һ����ͬ����Ԫ�صļ���
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	char ch[5];
	double data1[20];
	double data2[15 + 5];

	//����Ĵ���ֻ����֧��C99��׼�ı������ϱ��루��GCC��gcc test.c -std=c99
	//int n = 10;
	//scanf("%d", n);
	//int arr2[n];���������ǲ��ܳ�ʼ����
	//��C99��׼֮ǰ�������С�����ǳ����������ʽ
	//C99֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ߳�����

	int arr1[10] = { 1,2,3 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	int arr2[] = { 1,2,3 };//�����СΪ3��Ԫ��

	char ch1[10] = {'a','b','c'};
	//a b c 0 0 0 0 0 0 0
	char ch2[10] = "abc";//����������һ���ģ��������ʲ�һ��
	//a b c \0 0 0 0 0 0 0 
	char ch3[] = { 'a','b','c' };
	//a b c
	char ch4[] = "abc";
	//a b c \0
	

	//[] - �±����ò�����
	int sz = sizeof(arr) / sizeof(arr[0]);


	return 0;
}