#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//define����ı�ʶ������
#define MAX 100
#define STR "abcdef"
//ö�ٳ���
enum Color
{
	RED,
	GREEN,
	BLUE
};
//�ֲ������������򣺾ֲ��������ڵľֲ���Χ
//�ֲ��������������ڣ������������������ڿ�ʼ�����������������ڽ���

//ȫ�ֱ�����������ȫ�ֱ���������������������
//ȫ�ֱ������������ڣ������������������

int main()
{
	/*
	���泣��
	30;
	3.14;
	'w';
	"abc";�ַ���������ֵ�����Ǳ�����C��������û���ַ������͵�
	��char a = 'a';
	��char arr[10] = "abcdef";
	*/

	//const���ε�*������*
	const int a = 10;//const���εģ������Ǳ��������ǲ��ܱ�ֱ���޸ģ��г���������
	int n = 10;
	int arr[10] = { 1 ,2,3,4};
	char arr2[] = "abcdef?";//�����и�����\0
	char arr3[7] = { 'a','b','c','d','e','f','a'};//�����ص�\0����Ҫ�Լ���

	char ch[10] = "hello bit1";

	
	printf("arr2=%s\n", arr2);
	printf("arr3=%s\n", arr3);

	int len = strlen("abcdef");
	int arr2_len = strlen(arr2);
	int arr3_len = strlen(arr3);
	printf("len = %d\n", len);
	printf("arr2 len =%d\n", arr2_len);//strlen�����\0ǰ�ж��ٸ��ַ�
	printf("arr3 len =%d\n", arr3_len);



	//int arr[a] = {0};����
	//int arr[n] = {0};���У������Ԫ���������ǳ�������ʹ����const��aҲ�Ǳ���

	printf("MAX=%d\n", MAX);
	int max = MAX;
	printf("a=%d\n", a);
	printf("STR=%s\n", STR);

	enum Color c = GREEN;
	printf("c=%d\n", c);//ö��ʵ������������ʽ���ڵģ�Ĭ�ϴ�0��ʼ
	

	//test();
	return 0;
}
