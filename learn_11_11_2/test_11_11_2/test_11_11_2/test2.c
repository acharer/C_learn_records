#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
void test()
{
	/*
	ת���ַ�
	\?    ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ�� *****
	\'	  ���ڱ�ʾ '	 *****
	\"    ���ڱ�ʾ "	 *****
	\\    ���ڱ�ʾ \	 *****
	\a    �����ַ�������(Windows�Ǹ�������ʾ��)
	\b	  �˸��
	\f    ��ֽ��
	\n    ����	 *****
	\r	  �س�	 *****
	\t    ˮƽ�Ʊ��	 *****
	\v    ��ֱ�Ʊ��
	\ddd  ddd��ʾ1-3���˽��Ƶ����֡���\130 X	 *****(�˽��Ƶ�130ת����ʮ���ƺ��Ӧ�Ĵ�дX��ASCII��ֵ)
	\xdd  dd��ʾ2��ʮ�����Ƶ����֡���\x30 0	 *****(ʮ�����Ƶ�30ת����ʮ���ƺ��Ӧ��0��ASCII��ֵ)
	*/

	/*
	printf��ӡ
	%d  ��ӡ����
	%c  ��ӡ�ַ�
	%s  ��ӡ�ַ���
	%f  ��ӡfloat���͵�����
	%lf ��ӡdouble���͵�����
	%zu ��ӡsizeof�ķ���ֵ
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