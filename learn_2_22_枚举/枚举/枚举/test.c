#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
ö�ٵ��ŵ�
1.���Ӵ���Ŀɶ��ԺͿ�ά����
2.�ͣ�define����ı�ʶ����ȣ�ö�������ͼ�飬�����Ͻ�
3.��ֹ��ڤڤ��Ⱦ����װ��
4.���ڵ���
5.ʹ�÷��㣬һ�ο��Զ���������
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
	//ö�ٳ���
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
	enum Day d2 = 5; //��C++�У����ͼ���ϸ�����д���᲻ͨ��

	printf("%d\n", Mon);
	printf("%d\n", Tues);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);
	printf("%d\n", Sun);

	return 0;
}
