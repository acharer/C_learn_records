#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ṹ�������
struct Stu
{
	char name[20];
	int age;
}s1,s2;//����s1,s2��ȫ�ֱ���

//�����ṹ��
struct
{
	char name[20];
	int age;
}s4;
//�����ṹ��ֻ������һ�Σ������û������
struct
{
	int a;
	char b;
	float c;
}x;
struct
{
	int a;
	char b;
	float c;
}a[20], * p;

//�ṹ��������ã�����
struct Node
{
	int data;
	struct Node* next;
};
//ʹ��typedef�򻯽ṹ�嶨��
//1
typedef struct node
{
	int data;
	struct node* next;
}node;
//2
typedef struct linklist
{
	int data;
	struct node* next;
}* linklist;

node node1;
linklist node2;


struct Point
{
	int x;
	int y;
};

struct score
{
	int n;
	char ch;
};
struct stu
{
	char name[20];
	int age;
	struct score s;
};
int main()
{
	struct stu s3;//s3�Ǿֲ�����
	//p = &x;//��ʹ���������ṹ��ĳ�Ա��ͬ�����Ǳ�������Ϊ���ǵ������ǲ�һ����

	struct Point p2 = {3,4};
	struct stu s1 = { "zhangshan",20,{100,'q'} };
	return 0;
}