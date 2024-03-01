#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
	�ṹ�����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա
*/
//��һ��д��
typedef struct st_type1
{
	int i;
	int a[0];//���������Ա
}type_a1;
//�ڶ���д��
typedef struct st_type2
{
	int i;
	int a[];//���������Ա
}type_a2;
/*
����������ص㣺
	�ṹ�е����������Աǰ���������һ��������Ա
	sizeof���ص����ֽṹ��С����������������ڴ�
	�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڸýṹ�Ĵ�С
*/
void test();

struct S
{
	int n;
	int arr[];//���������Ա
};
int main()
{
	int sz = sizeof(struct S);
	printf("%d\n", sz);//4

	//���������ʹ��
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
	if (ps == NULL)
	{
		printf("malloc error\n");
		return 1;
	}

	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
	if (ptr != NULL)
	{
		ps = ptr;
		ptr = NULL;
	}

	//�ͷ�
	free(ps);
	ps = NULL;

	printf("\n");

	test();

	return 0;
}

//��һ�ָ���������һ��Ч����д��
struct S2
{
	int n;
	int* arr;
};

void test()
{
	struct S2* ps2 = (struct S2*)malloc(sizeof(struct S2));
	if (ps2 == NULL)
	{
		printf("malloc error\n");
		return 1;
	}
	ps2->n = 100;
	ps2->arr = (int*)malloc(40);

	if (ps2->arr == NULL)
	{
		return 1;
	}
	//ʹ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps2->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps2->arr[i]);
	}

	//����
	int* ptr = (int*)realloc(ps2->arr, 80);
	if (ptr != NULL)
	{
		ps2->arr = ptr;
		ptr = NULL;
	}

	//�ͷ�
	free(ps2->arr);
	free(ps2);
	ps2 = NULL;

}