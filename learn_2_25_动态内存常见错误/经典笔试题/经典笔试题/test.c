#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void GetMemory(char* p)
{
	p = (char*)malloc(100);//p���βΣ�����������p�ᱻ����
}
void Test(void)
{
	char* str = NULL;
	GetMemory(str);//����str����ȥ�����ܸı�str��str��ΪNULL
	strcpy(str, "hello world");//strΪNULL��������ʱ�����
	printf(str);
	//û���ͷ�
}

//�޸�1
void GetMemory2(char** p)
{
	*p = (char*)malloc(100);//p���βΣ�����������p�ᱻ����
}
void Test2(void)
{
	char* str = NULL;
	GetMemory2(&str);//����str��ŵľ��Ƕ�̬���ٵ�100�ֽڵĵ�ַ
	strcpy(str, "hello world");//strΪNULL��������ʱ�����
	printf(str);
	//�ͷ�
	free(str);
	str = NULL;
}
//�޸�2
char* GetMemory3()
{

	char* p = (char*)malloc(100);//p���βΣ�����������p�ᱻ����
	return p;
}
void Test3(void)
{
	char* str = NULL;
	str = GetMemory3();//����str��ŵľ��Ƕ�̬���ٵ�100�ֽڵĵ�ַ
	strcpy(str, "hello world");//strΪNULL��������ʱ�����
	printf(str);
	//�ͷ�
	free(str);
	str = NULL;
}

int main()
{
	//Test();
	Test2();

	return 0;
}