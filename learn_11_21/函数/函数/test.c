#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 1.дһ�������������ж�һ�����ǲ�������,�Ǿͷ���1,���Ǿͷ���0
int is_prime(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)//sqrt()�ǿ�ƽ��������������math.h
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

// 2.дһ�������������ж�һ���ǲ�������,�Ǿͷ���1,���Ǿͷ���0
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//���鴫�Σ�ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ����������������
// ������β�int arr[]����ȥ�����飬ʵ������ָ��
// 3.дһ��������ʵ��һ��������������Ķ��ֲ���,�ҵ��ͷ����±�,�Ҳ����ͷ���-1
int binary_search(int arr[], int num, int element_num)
{
	int left = 0;
	int right = element_num - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if(arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}
// 4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1
void add(int* p)
{
	(*p)++;
}

int main()
{
	//��ӡ1~200֮�������
	int i = 0;
	int count = 0;
	for (i = 2; i <= 200; i++)
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d", count);
	printf("\n**********************************************\n");
	//��ӡ1000~2000֮�������
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	printf("\n**********************************************\n");
	//������arr[]����num���������±�
	int num = 75;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,15,16,17,19,25,36,72,91 };
	int element_num = sizeof(arr) / sizeof(arr[0]);
	int flag = binary_search(arr, num, element_num);
	if (flag != -1)
	{
		printf("�ҵ��ˣ��±�Ϊ %d ", flag);
	}
	else
	{
		printf("û�ҵ�");
	}
	printf("\n**********************************************\n");

	int times = 0;
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	add(&times);
	printf("%d\n", times);
	return 0;
}
//�������Ի������
//��������Ƕ��
//����������ʽ���� printf("%d", printf("%d", printf("%d", 43)))
//������д����ֵ��ʱ��Ĭ�Ϸ���������int
/*
int main(void)��ȷ��˵����main��������Ҫ����

���Ǳ�����main�������в�����
int main(int argc,char* argv[],char *envp[])

int main(void)
{

}

*/