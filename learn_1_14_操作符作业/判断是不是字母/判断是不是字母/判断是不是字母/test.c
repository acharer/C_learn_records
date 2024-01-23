#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch = 0;
	while (scanf(" %c", &ch) == 1)//%c的前面加空格，可以跳过下一个字符之前的所有空白字符
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			printf("%c is an alphabet.\n",ch);
		else
			printf("%c is not an alphabet.\n",ch);

		getchar();//消化掉每次输出完后面的空格
	}
	return 0;
}