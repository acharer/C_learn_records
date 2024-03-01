#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
联合体的大小计算
1.联合的大小至少是最大成员的大小
2.当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
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

//判断当前计算机的大小端存储
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
		printf("小端\n");
	}
	else
	{
		printf("大端\n");

	}

	printf("%d\n", sizeof(union Un2));//8
	printf("%d\n", sizeof(union Un3));//16

	return 0;
}