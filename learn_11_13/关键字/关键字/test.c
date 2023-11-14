#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
关键字
	auto			自动变量
	break			跳出循环、case
	case			选择分支
	char			char类型
	const			常属性
	continue		循环
	default			
	do
	double
	else
	enum			枚举
	extern			声明外部符号
	float
	for
	goto			跳转
	if
	int
	long
	register		寄存器关键字
	return
	short
	signed			有符号的
	sizeof			计算大小
	static			静态的
	struct			结构体
	switch
	typedef			类型重命名
	union			联合体
	unsigned		无符号的
	void
	volatile
	while

*/

//.h  头文件（函数的声明、类型的声明、头文件的包含）
//.c  源文件（函数的视线）

//浮点数的四舍五入不能用你肉眼看的数值来计算
//因为浮点数在内存中有可能不能精确保存
//12.455
//12.4549888828282...

#define        ADD(x,y)            ((x)+(y))
//      宏名(宏的参数（无类型）)	   宏体  	
typedef unsigned int uint_32;

int pub = 0;

struct Node1
{
	int data;
	struct Node* next;
};

typedef struct Node2
{
	int data;
	struct Node2* next;

}Node2;

void test()
{
	static int a = 0;
	a++;
	printf("%d ", a);
}

int main()
{
	auto int a = 10;//auto可以被省略，让局部变量自动创建自动销毁

	unsigned int num = 0;
	uint_32 num2 = 0;
	
	struct Node1 node1;

	Node2 node2;

	//static的用法
	// 1.修饰局部变量，称为静态局部变量
	// 2.修饰全部变量，称为静态全局变量
	// 3.修饰函数，称为静态函数
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	// static修饰局部变量的时候，局部变量出了作用域也不销毁
	// 本质上，static修饰局部变量的时候，改变了变量的存储位置，存在了静态区，
	// 影响了变量的生命周期，生命周期和程序的生命周期一样

	//static修饰全局变量时，全局变量的外部链接属性被改为了内部链接属性，其他.c文件不能使用了
	//static修饰函数时，函数的外部链接属性被改为了内部链接属性，其他.c文件不能使用了

	register int num3 = 3;//register作用是建议：3放在寄存器中

	return 0;
}