#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h"
//int Add(int x, int y);//这里的x和y可以省略，只写int

//也可以编译为静态库
//用#pragma comment(lib,"add.lib") 导入静态库

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("%d\n", Add(a, b));
	return 0;
}