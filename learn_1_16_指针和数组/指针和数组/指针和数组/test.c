#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N_BALUES 5
float values[N_BALUES];
float* vp;
//  |ָ��-ָ��|  �õ�����ָ���ָ��֮ǰ��Ԫ�ظ���
//�������е�ָ�붼�����
//ָ��ͬһ��ռ��2��ָ��������

int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}

void print1()
{
	for (vp = &values[N_BALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
}
void print2()
{
	for (vp = &values[N_BALUES-1]; vp >= &values[0];vp--)
	{
		*vp = 0;
	}
}
//��׼�涨������ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ��Ƚ�
//���������ѡprint1�����ķ�ʽ


//���飺һ����ͬ����Ԫ�صļ���
//ָ���������һ����������ŵ��ǵ�ַ

void test1(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d "), * (p + i));
	}
}
void test1(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d "), arr[i]);
	}
}
//���鴫��

int mian()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);//9

	int len = my_strlen("abcdef");
	printf("%d\n", len);
	int* p = arr;


	return 0;
}