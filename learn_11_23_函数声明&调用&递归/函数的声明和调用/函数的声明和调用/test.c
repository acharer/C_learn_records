#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"
//int Add(int x, int y);//�����x��y����ʡ�ԣ�ֻдint

//Ҳ���Ա���Ϊ��̬��
//��#pragma comment(lib,"add.lib") ���뾲̬��

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("%d\n", Add(a, b));
	return 0;
}