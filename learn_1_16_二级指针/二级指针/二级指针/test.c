#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int a = 10;
	//int* pa = &a;
	//int** ppa = &pa;
	////int * * pa
	////�ڶ��� * ˵��ppa��ָ��
	////ǰ���int* ˵��ppaָ�������Ϊint*

	int a = 10;
	int b = 20;
	int c = 30;

	int arr[10];

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	//parr���Ǵ��ָ�������
	//ָ������
	int* parr[10] = { &a,&b,&c };

	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };

	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}


	return 0;
}