#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[5] = { 0 };
	//&数组名 - 取出的是数组的地址
	int (*p)[5] = &arr;//数组指针

	//&函数名 - 取出的就是函数的地址
	printf("%p\n", &add);
	printf("%p\n", add);
	//对于函数来说，&函数名和函数名都是函数的地址

	int (*pf)(int, int) = &add;//函数指针

	int ret = (*pf)(2, 3);
	int ret2 = pf(2, 3);

	printf("%d\n", ret);
	printf("%d\n", ret2);


	//( *( void (*)() )0 )()
	//拆分看
	//	   void (*)()         这是一个函数指针类型
	//   ( void (*)() )0	  这里把0强制类型转换成了函数指针
	//  *( void (*)() )0	  这里解引用函数指针
	//(                  )()  调用这个函数
	//综上，这是一次函数调用
	// 
	// 
	// 
	// 
	//void (* signal(int,void(*)(int)))(int);
	//拆分看
	//        signal(int,void(*)(int)) //这里声明了signal函数的两个参数int，void(*)(int)
	//void (*                          )(int)；//这里是signal函数的返回类型，也是一个函数指针
	//综上，这是一次函数声明


	typedef void(*pf_t)(int);//把 void(*)(int) 类型重命名为 pf_t
	pf_t signal(int, pf_t);//这样使用起来就轻松很多


	return 0;
}

