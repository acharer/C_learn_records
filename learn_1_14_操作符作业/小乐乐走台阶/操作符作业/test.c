#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//С������̨��
//С�����Ͽ���Ҫ��n��̨�ף���ÿ�ο�����һ��Ҳ���������ף���һ���ж������߷�
int fib(int n)
{
	if (n <= 2)
		return n;
	else
		return fib(n - 1) + fib(n - 2);

}

int main()
{
	int n = 0;
	//����
	scanf("%d", &n);
	//����
	int m = fib(n);
	//���
	printf("%d\n", m);

	return 0;
}