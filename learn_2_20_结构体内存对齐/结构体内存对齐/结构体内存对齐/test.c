#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
结构体的对齐规则：
	1.第一个成员在结构体变量偏移量为0的地址处
	2.其他成员变量要对其到某个数字（对齐数）的整数倍的地址处
	  对齐数 = 编译器默认对齐数 与 该成员大小的 较小值
	  vs中的默认对齐数为8
	3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
	4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
	  结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍

*/
/*
为什么存在内存对齐？
	1.平台原因（移植原因）：
	  不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处
	  取某些特定类型的数据，否则抛出硬件异常
	2.性能原因：
	  数据结构（尤其是栈）应该尽可能的在自然边界上对齐
	  原因在于，为了访问未对齐的内存，处理器需要操作两次内存访问；而对齐的内存访问
	  仅需要一次访问
综体的来说：结构体的内存对齐就是拿空间来换取时间的做法
*/

/*
那么在设计结构体的时候，我们既要满足对齐，又要节省空间，如何做到：
  让占用空间小的成员尽量集中在一起。

*/


struct S1 
{
	char c1;//1
	int i;//4
	char c2;//1
};

struct S2
{
	char c1;//1
	char c2;//1
	int i;//4
};

struct S3
{
	double d;//8
	char c;//1
	int i;//4
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};
#pragma pack(4) //可以把默认对齐数改为4
struct S
{
	int i;
	double d;
};
#pragma pack() //可以把默认对齐数改回8

#pragma pack(1) //可以把默认对齐数改为1,相当于不让内存对齐
struct S5
{
	char c1;
	int i ;
	char c2;
};
#pragma pack() //可以把默认对齐数改回8
int main()
{
	printf("%d\n", sizeof(struct S1));//12
	printf("%d\n", sizeof(struct S2));//8
	printf("%d\n", sizeof(struct S3));//16
	printf("%d\n", sizeof(struct S4));//32
	printf("%d\n", sizeof(struct S));//12
	printf("%d\n", sizeof(struct S5));//12

	return 0;
}
