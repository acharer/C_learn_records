#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
�ؼ���
	auto			�Զ�����
	break			����ѭ����case
	case			ѡ���֧
	char			char����
	const			������
	continue		ѭ��
	default			
	do
	double
	else
	enum			ö��
	extern			�����ⲿ����
	float
	for
	goto			��ת
	if
	int
	long
	register		�Ĵ����ؼ���
	return
	short
	signed			�з��ŵ�
	sizeof			�����С
	static			��̬��
	struct			�ṹ��
	switch
	typedef			����������
	union			������
	unsigned		�޷��ŵ�
	void
	volatile
	while

*/

//.h  ͷ�ļ������������������͵�������ͷ�ļ��İ�����
//.c  Դ�ļ������������ߣ�

//���������������벻���������ۿ�����ֵ������
//��Ϊ���������ڴ����п��ܲ��ܾ�ȷ����
//12.455
//12.4549888828282...

#define        ADD(x,y)            ((x)+(y))
//      ����(��Ĳ����������ͣ�)	   ����  	
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
	auto int a = 10;//auto���Ա�ʡ�ԣ��þֲ������Զ������Զ�����

	unsigned int num = 0;
	uint_32 num2 = 0;
	
	struct Node1 node1;

	Node2 node2;

	//static���÷�
	// 1.���ξֲ���������Ϊ��̬�ֲ�����
	// 2.����ȫ����������Ϊ��̬ȫ�ֱ���
	// 3.���κ�������Ϊ��̬����
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	// static���ξֲ�������ʱ�򣬾ֲ���������������Ҳ������
	// �����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�ã������˾�̬����
	// Ӱ���˱������������ڣ��������ںͳ������������һ��

	//static����ȫ�ֱ���ʱ��ȫ�ֱ������ⲿ�������Ա���Ϊ���ڲ��������ԣ�����.c�ļ�����ʹ����
	//static���κ���ʱ���������ⲿ�������Ա���Ϊ���ڲ��������ԣ�����.c�ļ�����ʹ����

	register int num3 = 3;//register�����ǽ��飺3���ڼĴ�����

	return 0;
}