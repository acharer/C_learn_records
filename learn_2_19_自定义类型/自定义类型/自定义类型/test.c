#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//结构体的声明
struct Stu
{
	char name[20];
	int age;
}s1,s2;//这里s1,s2是全局变量

//匿名结构体
struct
{
	char name[20];
	int age;
}s4;
//匿名结构体只能用这一次，后面就没法用了
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

//结构体的自引用（链表）
struct Node
{
	int data;
	struct Node* next;
};
//使用typedef简化结构体定义
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
	struct stu s3;//s3是局部变量
	//p = &x;//即使两种匿名结构体的成员相同，但是编译器认为他们的类型是不一样的

	struct Point p2 = {3,4};
	struct stu s1 = { "zhangshan",20,{100,'q'} };
	return 0;
}