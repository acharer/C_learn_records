#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[5] = { 0 };
	//&������ - ȡ����������ĵ�ַ
	int (*p)[5] = &arr;//����ָ��

	//&������ - ȡ���ľ��Ǻ����ĵ�ַ
	printf("%p\n", &add);
	printf("%p\n", add);
	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ

	int (*pf)(int, int) = &add;//����ָ��

	int ret = (*pf)(2, 3);
	int ret2 = pf(2, 3);

	printf("%d\n", ret);
	printf("%d\n", ret2);


	//( *( void (*)() )0 )()
	//��ֿ�
	//	   void (*)()         ����һ������ָ������
	//   ( void (*)() )0	  �����0ǿ������ת�����˺���ָ��
	//  *( void (*)() )0	  ��������ú���ָ��
	//(                  )()  �����������
	//���ϣ�����һ�κ�������
	// 
	// 
	// 
	// 
	//void (* signal(int,void(*)(int)))(int);
	//��ֿ�
	//        signal(int,void(*)(int)) //����������signal��������������int��void(*)(int)
	//void (*                          )(int)��//������signal�����ķ������ͣ�Ҳ��һ������ָ��
	//���ϣ�����һ�κ�������


	typedef void(*pf_t)(int);//�� void(*)(int) ����������Ϊ pf_t
	pf_t signal(int, pf_t);//����ʹ�����������ɺܶ�


	return 0;
}

