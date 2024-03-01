#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//位段的成员必须为整形家族，int unsigned int,signed int ,char 
//位段的成员后面有一个冒号和数组
struct A
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;

};

//47 bit
//6byte - 48bit
//8byte - 64bit

/*
位段的内存分配
1.位段的成员可以是 整形家族类型
2.位段的空间上是按照需要以4个字节（int）或者1字节（char）的方式来开辟的
3.位段设计很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段
*/

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;

};

/*
位段的跨平台问题
1.int位段被当成有符号数还是无符号数 不确定
2.位段中最大位的数目不确定。（16位机器最大16，32位机器最大32，写成27，
  在16位机器上会出问题）
3.位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义
4.当一个结构包含两个位段，第二个位段成员比较大，无法容纳与第一个位段剩余的位时，
  是舍弃剩余的位还是利用起来，这是不确定的

总结：
 跟结构相比，位段可以达到用样的效果，但是可以很好的节省空间。但有跨平台的问题存在
*/
int main()
{
	printf("%d\n", sizeof(struct A));//8

	struct S s = { 0 };
	s.a = 10;//1010 - 上面提到了a有3个bit位，放不下，只能截取 010
	s.b = 12;//1100
	s.c = 3;//00011
	s.d = 4;//0100
	//00000000 00000000 00000000 
	// 1100010    00011     0100
	//01100010 00000011 00000100
	//  6  2     0   3    0   4

 	return 0;
}