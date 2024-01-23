#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	int a = 10;//a是整型变量，占用4个字节
	int* pa = &a;//pa是一个指针变量，用来存放地址
	
	//这里pa中存放的是a的地址,即pa指向a
	//本质上指针就是地址
	//口语中说的指针，其实就是指针变量，指针变量就是一个变量
	//指针变量是一个用来存放地址的变量

	char* pc = NULL;
	short* ps = NULL;
	int* pi = NULL;
	double* pd = NULL;

	//%zu是sizeof()专用的打印格式
	printf("%zu\n", sizeof(pc));
	printf("%zu\n", sizeof(ps));
	printf("%zu\n", sizeof(pi));
	printf("%zu\n", sizeof(pd));

	return 0;
}
*/

//指针类型的意义
//1.指针类型决定了指针再被解引用的时候访问几个字节
//  例如：如果是int*的指针，解引用访问4个字节
//		  如果是char*的指针,解引用访问1个字节
//2.指针的类型决定了指针+-1操作的时候，跳过几个字节
//3.指针类型决定了解引用的时候，数据的存储方式

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = (char*)&a;
	*pa = 0;
	printf("%d\n", a);

	printf("pa = %p\n", pa);
	printf("pa+1 = %p\n", pa+1);
	printf("pc = %p\n", pc);
	printf("pc+1 = %p\n", pc+1);
	
	int* pi = &a;//pi 解引用访问4个字节，pi+1也是跳过4个字节
	float* pf = &a;//pf 解引用访问4个字节，pf+1也是跳过4个字节
	//int* 和float* 是不是就可以通用呢？
	//不能
	*pi = 100;
	*pf = 100.0;
	//指针类型决定了解引用的时候，数据的存储方式


	return 0;
}



//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值：0xcccccccc
//	*p = 10;//非法访问内存了，这里p就是野指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)//指针的越界访问也会造成野指针
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//指针指向的空间被释放了，也会造成野指针
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}

//如何在一定程度上避免空指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放的时候，及时的设置NULL
//4.避免返回局部变量的地址
//5.指针使用之前检查有效性

//int main()
//{
//	int a = 10;
//	int* p = &a;//给指针初始化
//
//	int* p2 = NULL;//先设置为空指针
//	//*p2 = 100;//程序崩溃
//	int* p3 = NULL;
//	if (p3 != NULL)
//	{
//		*p3 = 100;
//	}
//
//	return 0;
//}

//*vp++  -----  *vp;vp++
//(*vp)++ -----  vp指向的对象++

//给数组赋值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组下标写法
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 1;
//	}
//	//指针写法1
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	//指针写法2
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}