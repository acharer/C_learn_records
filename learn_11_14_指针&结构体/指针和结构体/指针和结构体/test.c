#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct stu {
	char name[10];
	int age;
	char sex[10];
	char tel[20];
};

void print(struct stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tel);
	//->
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tel);
}

int main()
{
	int a = 10;//���ڴ�����4���ֽڣ��洢10
	
	int* p = &a;//p��ָ�����

	int* p1, p2, p3;//ֻ��p1��ָ��
	int* p4, * p5, * p6;//��ȷ����������ָ��

	*p = 20;//* ���ǽ����ò�����   *p����pָ��Ķ���

	printf("a�ĵ�ַ��%p\n", &a);
	printf("a=%d\n", a);

	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(long*));
	printf("%zu\n", sizeof(long long*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));//4��8,Ҫ���豸������32λ����64λ

	struct stu s = { "zhangsan",20,"nan","1559666688" };

	printf("%s %s %d %s\n", s.name, s.sex, s.age, s.tel);

	print(&s);
	return 0;
}