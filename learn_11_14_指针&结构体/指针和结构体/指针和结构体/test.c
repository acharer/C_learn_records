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
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tel);
}

int main()
{
	int a = 10;//向内存申请4个字节，存储10
	
	int* p = &a;//p是指针变量

	int* p1, p2, p3;//只有p1是指针
	int* p4, * p5, * p6;//正确的连续创建指针

	*p = 20;//* 就是解引用操作符   *p就是p指向的对象

	printf("a的地址：%p\n", &a);
	printf("a=%d\n", a);

	printf("%zu\n", sizeof(char*));
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(long*));
	printf("%zu\n", sizeof(long long*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));//4或8,要看设备具体是32位还是64位

	struct stu s = { "zhangsan",20,"nan","1559666688" };

	printf("%s %s %d %s\n", s.name, s.sex, s.age, s.tel);

	print(&s);
	return 0;
}