#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int i = 1;

	//do
	//{
	//	if (i == 5)
	//		break;
	//	i++;
	//	printf("%d ", i);
	//} while (i <= 10);
//����n�Ľ׳�
	//{
	//	int i = 1;
	//	int n = 0;
	//	int ret = 1;

	//	scanf("%d", &n);
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	printf("%d\n", ret);
	//}
//����1��+2��+3��+...+10��
	//{
	//	int i = 1;
	//	int n = 0;
	//	int ret = 1;
	//	int sum = 0;

	//	scanf("%d", &n);
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret*i;
	//		sum = sum + ret;
	//	}
	//	printf("%d\n", sum);
	//}
//�����������ĳ������n
	//��������
	//{
	//	int i = 0;
	//	int n = 0;
	//	int arr[] = { 0,1,2,3,5,6,9,16,25,36,94 };
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	scanf("%d", &n);
	//	for (i = 0; i < sz; i++)
	//	{
	//		if (arr[i] == n)
	//		{
	//			printf("�ҵ��ˣ������±�Ϊ n=%d\n", i);
	//			break;
	//		}	
	//	}
	//	if (i == sz)
	//	{
	//		printf("û�ҵ�\n");
	//	}
	//}
	//���ֲ���
	{
		int n;
		scanf("%d", &n);
		int arr[] = { 0,2,5,6,9,11,15,18,22,32,47,52,61,87,93 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		int low = 0;
		int high = sz - 1;
		int mid = (low + high) / 2;
		while (arr[mid] != n && (high != low))
		{
			if (arr[mid] < n)
			{
				low = mid + 1;
				mid = (low + high) / 2;
			}
			else if (arr[mid] > n)
			{
				high = mid - 1;
				mid = (low + high) / 2;
			}
		}
		if (arr[mid] == n)
			printf("�ҵ��ˣ������±�n=%d\n", mid);
		else if (high == low)
			printf("û�ҵ�");
	}
	return 0;
}