#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��д��������1��100�����������г��ֶ��ٵ�����9
void fuc_1(void)
{
	int count = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d ", count);
}

//������ͣ�����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100
void fuc_2(void)
{
	double sum = 0;
	int i = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
		
	}
	printf("\n%lf\n", sum);

}

//��10�������е����ֵ
void fuc_3(void)
{
	int i = 0;

	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for ( i = 0; i < 10; i++)
	{
		if (arr[0] < arr[i])
		{
			max = arr[i];
		}
	}

	printf("\n%d\n ", max);
}
//���9*9�˷��ھ���
void fuc_4(void)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d*%d ", i, j);
		}
		printf("\n");
	}
}
int main()
{
	
	fuc_1();
	fuc_2();
	//fuc_3();
	fuc_4();
	return 0;
}