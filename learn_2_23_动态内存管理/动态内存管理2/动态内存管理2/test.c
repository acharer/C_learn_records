#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int a = 10;
	//int* p = &a;

	////free(p);//����
	////free�����������ͷŶ�̬���ٵ��ڴ�
	////1.�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ�����
	////2.�������ptr��NULLָ�룬����ʲô������ 
	//p = NULL;

	//calloc = malloc+memset

	//int* p = (int*)calloc(10, sizeof(int));
	//if (p == NULL)
	//{
	//	printf("%s\n", strerror(errno));
	//	return 1;
	//}
	////��ӡ
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
	////�ͷ�
	//free(p);
	//p = NULL;

	//

	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//ʹ��
	//1 2 3 4 5 6 7 8 9 10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i + 1;
	}
	//����
	int* ptr = (int *)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
		ptr = NULL;
	}
	//ʹ��
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//�ͷ�
	free(p);
	p = NULL;

	//realloc(NULL,40)�ȼ���malloc(40)

	return 0;
}