#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
ȫ�ֱ�������̬�������Ƿ��ھ�̬����
ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��λ0
�ֲ��������Ƿ���ջ���ģ�����ʼ����Ĭ��ֵ�����ֵ������vs��Ĭ��Ϊ0xcccccccc

sizeof������������㷵�صĽ����size_t���͵ģ����޷������ε�
int i = -1;
if(i>sizeof(i))//����i������Ϊ�޷������κ����4
*/





//ͳ�ƶ�������1�ĸ���
int count_num_of_1()
{
	int count = 0;
	while (n)
	{
		n = n & n - 1;//ÿ��n&n-1 ����ȥ�������������ұߵ�1
		count++;
	}
	//���ƣ����Ҫ�ж�һ�����ǲ���2��n�η�
	//if((n&(n-1))==0)

	return count;
}

//����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ��ͬ��
int count_diff_bit(int m, int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count++;
		}
	}

	return count;
}
int count_diff_bit_2(int m, int n)
{
	int count = 0;
	int ret = m ^ n;
	//ͳ��һ��ret�ж�����λ�м���1
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}

	return count;
}

//�ֱ��ӡһ�����������������е�����ż��λ������λ
void print_num(int n)
{
	int i = 0;
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
}
//��ӡһ�������*��,��������
void print_X()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					printf("*");
				else if ((i + j) == (n - 1))
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
}

//��ȡĳһ����ĳһ�µ�����,��������
int is_leap_year(int y)
{
	return (((y % 4 == 0) && y % 100 != 0) || (y % 400 == 0));
}
int day_of_mounth()
{
	int d = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &y, &m) == 2)
	{
		int d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
	}

	return 0;
}
int main()
{

	return 0;
}