#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void GetMemory(char* p)
{
	p = (char*)malloc(100);//p是形参，函数结束后p会被销毁
}
void Test(void)
{
	char* str = NULL;
	GetMemory(str);//这里str传进去并不能改变str，str仍为NULL
	strcpy(str, "hello world");//str为NULL，解引用时会崩溃
	printf(str);
	//没有释放
}

//修改1
void GetMemory2(char** p)
{
	*p = (char*)malloc(100);//p是形参，函数结束后p会被销毁
}
void Test2(void)
{
	char* str = NULL;
	GetMemory2(&str);//这里str存放的就是动态开辟的100字节的地址
	strcpy(str, "hello world");//str为NULL，解引用时会崩溃
	printf(str);
	//释放
	free(str);
	str = NULL;
}
//修改2
char* GetMemory3()
{

	char* p = (char*)malloc(100);//p是形参，函数结束后p会被销毁
	return p;
}
void Test3(void)
{
	char* str = NULL;
	str = GetMemory3();//这里str存放的就是动态开辟的100字节的地址
	strcpy(str, "hello world");//str为NULL，解引用时会崩溃
	printf(str);
	//释放
	free(str);
	str = NULL;
}

int main()
{
	//Test();
	Test2();

	return 0;
}