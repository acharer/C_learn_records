#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���������ֲ���������֣���1461�ɲ�ɣ�1��461����14��61����146��1��
//�����ֺ�������ֳ˻����������������Ϊ����ˮ�ɻ�
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		int j = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = pow(10, j);
			sum += (i % k) * (i / k);
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}