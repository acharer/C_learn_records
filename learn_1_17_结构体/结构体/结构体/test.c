#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构是一些值的集合，这些值成为成员变量。结构的每个成员可以是不同类型的变量


//声明结构体
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p3,p4;
//直接创建了两个结构体 p3和p4 ，他们的类型是 struct Peo，是全局结构体变量

struct Peo p5, p6;
struct St
{
	struct Peo p;
	int num;
	float f;
};
void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员变量
}
void print2(struct Peo* p)
{
	printf("%s %s %s %d\n", p->name, p->tele, p->sex, p->high);//结构体指针->成员变量
}
//首选print2

int main()
{
	//初始化结构体变量，可以完全初始化也可以不完全初始化
	struct Peo p1 = { "张三","15596668862","男",181 };
	struct St s = { {"李四","15596688888","女",166},100,3.14f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f);


	return 0;
}