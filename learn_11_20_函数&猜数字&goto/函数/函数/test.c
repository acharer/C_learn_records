#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ʽ����
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

void swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰa=%d,b=%d", a, b);
	//a��b��ʵ��
	Swap(a, b);
	printf("������a=%d,b=%d", a, b);
	return 0;
}