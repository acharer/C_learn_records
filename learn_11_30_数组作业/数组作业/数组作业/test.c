#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// sizeof
// sizeof��һ��������
// �������������(����)��ռ�ڴ�ռ�Ĵ�С������ע�ڴ��д�ŵľ�������
// ��λ���ֽ�
// 
// strlen
// strlen��һ���⺯������ר�����ַ������ȵģ�ֻ������ַ���
// �Ӳ��������ĵ�ַ���һֱ��\0��ͳ��\0֮ǰ���ֵ��ַ��ĸ���
//


int main()
{
	char str[] = "hello bit";
	printf(("%d %d\n", sizeof(str), strlen(str)));

	return 0;
}