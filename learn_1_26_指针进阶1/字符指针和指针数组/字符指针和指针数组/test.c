#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print1(int arr[3][5], int r, int c);
void print2(int(*p)[5], int r, int c);


int main()
{
	char* p = "abcdef";//�����ǰ��ַ������ַ�a�ĵ�ַ����ֵ����p

	const char* p1 = "abcdef";//�����ַ������ڴ���ֻ����һ�ݣ���ҹ�ͬʹ��
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
			//������д���ǵȼ۵�
			printf("%d ",*(parr[i]+j));
			//printf("%d ", parr[i][j])��
		}
	}
	printf("\n");

	int arr[10] = { 0 };
	int* p31 = arr;//����p31���������Ԫ�ص��׵�ַ
	int(*p32)[10] = &arr;//����ָ�룬p3��ָ�룬ָ��int [10]���͵�����,�����ŵ�����������ĵ�ַ
	//������ʹ��ʱ���Ӽ�����Ĳ�����һ��


	int err[] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*p33)[10] = &err;//�����10���ܸ�����һ��ʡ��

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

//�����ղ���Ϊ��ά����ʱ,��ά�����������ָ���ǵ�һ�еĵ�ַ
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

//����������
void func(void)
{
	//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
	// ������2�����⣺
	// 1.sizeof(������)���������������ʾ�������飬���������������Ĵ�С
	// 2.&���������������������ʾ����Ȼ���������飬����&������ȡ��������������ĵ�ַ
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);//���4

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);//���4

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//���40

}