#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

//1.��NULLָ��Ľ����ò���
void test1()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//�����̬�ڴ����ʧ�ܣ�p��ֵΪNULL��������������
	free(p);
}
//2.�Զ�̬���ٿռ��Խ�����
int test2()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i <= 10; i++)//����ֻ������10�����Ϳռ䣬����Խ����
	{
		p[i] = i;
	}
	free(p);
	p = NULL;

	return 0;
}
//3.�ԷǶ�̬���ٿռ�ʹ��free�ͷ�
void test3()
{
	int a = 10;
	int* p = &a;
	//....

	free(p);
	p = NULL;
}
//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
int test4()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//ʹ��
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*p = i;
		p++;
	}
	//�ͷ�
	free(p);//�����p�Ѿ����ı��ˣ�����ָ��̬�����ڴ����ʼλ��
	p = NULL;

	return 0;

}
//5.��ͬһ�鶯̬�ڴ����ͷ�
void test5()
{
	int* p = (int*)malloc(40);
	//....
	free(p);
	p = NULL;

	//...
	free(p); 
}
//6.��̬�����ڴ������ͷţ��ڴ�й¶��
void test6()
{
	int* p = (int*)malloc(100);
	//...

	int flag = 0;
	scanf("%d", &flag);
	if (flag == 5)
	{
		return;//������ﷵ���ˣ��ͻᵼ��freeû�б�ִ��
	}

	free(p);
	p = NULL;
}
int test6_1()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return p;
	}
	//...
	return p;
}
int test6_2()
{
	int* ret = test6_1();
	//�����ͷ���
	return 0;
}

int main()
{

	return 0;
}