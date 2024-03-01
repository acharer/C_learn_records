#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>


struct S
{
	char c1;
	int i;
	char c2;
};

#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)

int main()
{
	struct S s = { 0 };
	printf("%d\n", offsetof(struct S, c1));//0
	printf("%d\n", offsetof(struct S, i));//4
	printf("%d\n", offsetof(struct S, c2));//8

	printf("%d\n", OFFSETOF(struct S, c1));//0
	printf("%d\n", OFFSETOF(struct S, i));//4
	printf("%d\n", OFFSETOF(struct S, c2));//8

	return 0;
}