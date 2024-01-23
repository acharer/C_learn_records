#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct Stu
{
	char name[20];
	int age;
	double score;
};

void set_stu(struct Stu* ps)
{
	//strcpy((*ps).name, "zhangsan");
	//(*ps).age = 20;
	//(*ps).score = 100.0;

	strcpy(ps->name, "zhangsan");
	ps->age = 20;
	ps->score = 100.0;
}

void print_stu(struct Stu ss)
{
	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
}

int main()
{
	struct Stu s = { 0 };
	set_stu(&s);
	print_stu(s);
	return 0;
}