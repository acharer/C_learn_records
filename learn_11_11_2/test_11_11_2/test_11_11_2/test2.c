#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
void test()
{
	/*
	转义字符
	\?    在书写连续多个问号时使用，防止他们被解析成三字母词 *****
	\'	  用于表示 '	 *****
	\"    用于表示 "	 *****
	\\    用于表示 \	 *****
	\a    警告字符，蜂鸣(Windows那个叮咚提示声)
	\b	  退格符
	\f    进纸符
	\n    换行	 *****
	\r	  回车	 *****
	\t    水平制表符	 *****
	\v    垂直制表符
	\ddd  ddd表示1-3个八进制的数字。如\130 X	 *****(八进制的130转换成十进制后对应的大写X的ASCII码值)
	\xdd  dd表示2个十六进制的数字。如\x30 0	 *****(十六进制的30转换成十进制后对应的0的ASCII码值)
	*/

	/*
	printf打印
	%d  打印整形
	%c  打印字符
	%s  打印字符串
	%f  打印float类型的数据
	%lf 打印double类型的数据
	%zu 打印sizeof的返回值
	*/

	printf("'abcdef'/a\n");
	printf("c:\test\628\test3\r\n");

	int len = strlen("c:\test\628\test3\r\n");
	printf("%d\n", len);
	printf("\a\a\a\a\a\a\a\a");

	printf("%c\n", '\130');
	printf("%d\n", 'X');

	printf("%c\n", '\x30');
	printf("%d\n", '0');
}