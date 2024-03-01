#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//define定义的标识符常量
#define MAX 100
#define STR "abcdef"
//枚举常量
enum Color
{
	RED,
	GREEN,
	BLUE
};
//局部变量的作用域：局部变量所在的局部范围
//局部变量的生命周期：进入作用域生命周期开始，出作用域生命周期结束

//全局变量的作用域：全局变量的作用域是整个工程
//全局变量的生命周期：整个程序的生命周期

int main()
{
	/*
	字面常量
	30;
	3.14;
	'w';
	"abc";字符串是字面值而不是变量，C语言中是没有字符串类型的
	如char a = 'a';
	而char arr[10] = "abcdef";
	*/

	//const修饰的*常变量*
	const int a = 10;//const修饰的，本质是变量，但是不能被直接修改，有常量的属性
	int n = 10;
	int arr[10] = { 1 ,2,3,4};
	char arr2[] = "abcdef?";//后面有个隐藏\0
	char arr3[7] = { 'a','b','c','d','e','f','a'};//无隐藏的\0。需要自己加

	char ch[10] = "hello bit1";

	
	printf("arr2=%s\n", arr2);
	printf("arr3=%s\n", arr3);

	int len = strlen("abcdef");
	int arr2_len = strlen(arr2);
	int arr3_len = strlen(arr3);
	printf("len = %d\n", len);
	printf("arr2 len =%d\n", arr2_len);//strlen求的是\0前有多少个字符
	printf("arr3 len =%d\n", arr3_len);



	//int arr[a] = {0};不行
	//int arr[n] = {0};不行，数组的元素数必须是常量，即使加了const，a也是变量

	printf("MAX=%d\n", MAX);
	int max = MAX;
	printf("a=%d\n", a);
	printf("STR=%s\n", STR);

	enum Color c = GREEN;
	printf("c=%d\n", c);//枚举实际上是整数形式存在的，默认从0开始
	

	//test();
	return 0;
}
