#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/*
* malloc
* calloc
* realloc
* free
*/

int main()
{
	int arr[10] = { 0 };
	//��̬�����ڴ�
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//ʹ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	//û��free
	//������˵�ڴ�ռ�Ͳ�������
	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ��

	free(p);
	p = NULL;

	return 0;
}