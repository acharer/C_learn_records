#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
������Ĵ�С����
1.���ϵĴ�С����������Ա�Ĵ�С
2.������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������
*/

union Un
{
	int a;//4
	char c;//1
};

struct St
{
	int a;//4
	char c;//1
};

//�жϵ�ǰ������Ĵ�С�˴洢
int check_sys()
{
	union 
	{
		char c;
		int i;
	}u;
	u.i = 1;//0x 00 00 00 01
	return u.c;
}

union Un2
{
	char arr[5];//5
	int i;//4
};
union Un3
{
	short arr[7];//14
	int i;//4
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));

	printf("%p\n", &u);
	printf("%p\n", &u.a);
	printf("%p\n", &u.c);

	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");

	}

	printf("%d\n", sizeof(union Un2));//8
	printf("%d\n", sizeof(union Un3));//16

	return 0;
}