#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch = 0;
	while (scanf(" %c", &ch) == 1)//%c��ǰ��ӿո񣬿���������һ���ַ�֮ǰ�����пհ��ַ�
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			printf("%c is an alphabet.\n",ch);
		else
			printf("%c is not an alphabet.\n",ch);

		getchar();//������ÿ����������Ŀո�
	}
	return 0;
}