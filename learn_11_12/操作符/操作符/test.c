#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
算数操作符
+ - * / %
移位操作符
>> <<
位操作符
& ^ |
赋值操作符
= += -= *= /= ^= |= >>= <<=
单目操作符
	!			逻辑反操作
	-			负值
	+			正直
	&			取地址
	sizeof		操作数的类型长度（以字节为单位）
	~			对一个数的二进制按位取反
	--			前置、后置--
	++			前置、后置++
	*			间接访问操作符（解引用操作符）
	(类型)		强制类型转换
关系操作符
	>
	>=
	<
	<=
	!=
	==
逻辑操作符
	&&			逻辑与
	||			逻辑或
条件操作符(三目操作符)
	exp1 ? exp2 : exp3
逗号表达式
	exp1，exp2，exp3...expn  
	//逗号表达式就是逗号隔开的一串表达式
	//逗号表达式的特点是：从左向右依次计算，整个表达式的结果就是最后一个表达式的结果
下标引用、函数调用和结构成员
[] () . ->
*/


int main()
{
	//int a = 7 / 2; 3
	//int b = 7 % 2; 1
	//printf("%d\n", a);
	//printf("%d\n", b);

 	float a = 7 / 2.0;//除号两端都是整数时，执行整数除法，只要两端有一个浮点数就执行浮点数除法
	int b = 7 % 2;//取模操作符两端只能是整数

	printf("%.2f\n", a);//.2f设置输出精度为两位小数
	printf("%.2d\n", b);

	//sizeof是操作符，且是弹幕操作符

	//int a = 10;
	//printf("%d\n", sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);//4
	//printf("%d\n", sizeof int);//报错
	
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
	printf("%d\n", sizeof(arr[0]));//4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10 - 数组元素的个数

	double a2 = 3.14;//字面浮点数，编译器默认理解为double类型
	printf("%lf\n", a2);
	int a3 = (int)3.14;
	printf("%d\n", a3);

	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);

	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	arr[3] = 20;//[]就是下标引用操作符 arr和3就是[]的操作数

	int n = 3;
	arr[n] = 20;//访问元素的时候n可以是变量

	// int sum=add(2,3);()就是函数调用操作符，add，2,3都是()的操作数

	return 0;
}