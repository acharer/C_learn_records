#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
枚举的优点
1.增加代码的可读性和可维护性
2.和￥define定义的标识符相比，枚举有类型检查，更加严谨
3.防止了冥冥污染（封装）
4.便于调试
5.使用方便，一次可以定义多个常量
*/

//enum Day
//{
//	Mon,//0
//	Tues,//1
//	Wed,//2
//	Thur,//3
//	Fri,//4
//	Sat,//5
//	Sun//6
//};

enum Day
{
	//枚举常量
	Mon = 1,//1
	Tues,//2
	Wed,//3
	Thur,//4
	Fri,//5
	Sat,//6
	Sun//7
};
struct Stu
{
	int a;
	char c;
};

int main()
{
	enum Day d = Fri;
	enum Day d2 = 5; //在C++中，类型检查严格，这种写法会不通过

	printf("%d\n", Mon);
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);
	printf("%d\n", Sun);

	return 0;
}
