#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//whileѭ���е�
//break���������õ���ֹѭ��
// continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
//
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
		{
			i++;
			continue;
		}
		printf("%d ", i);
		i++;

		if (8 == i)
		{
			break;
		}
		
	}

	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);
	int ch = 0;
	while ((ch = getchar()) != EOF)//ctrl+z�˳�
	{
		putchar(ch);
	}

	return 0;
}