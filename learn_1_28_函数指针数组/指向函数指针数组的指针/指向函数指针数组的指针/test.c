#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//����ָ������
	int (*pfArr[5])(int, int) = { 0 };

	//ָ�� ����ָ������ ��ָ��
	int (*(*ppfArr)[5])(int, int) = &pfArr;

	return 0;
}