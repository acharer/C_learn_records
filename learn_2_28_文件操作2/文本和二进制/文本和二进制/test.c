#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

void test();

/*
�ļ���ȡ�������ж�
	�ı��ļ�
	fgetc�ж��Ƿ�ΪEOF
	fgets�жϷ���ֵ�Ƿ�ΪNULL
	�������ļ�
	fread����ֵ�Ƿ�С��ʵ��Ҫ���ĸ���

*/
int main()
{
	int c;
	FILE* fp = fopen("test.txt", "r");
	if (!fp)
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
	{
		puts("End of file reached successfully");
	}

	fclose(fp);
	fp = NULL;
	return 0;

	test();
}

//֤���ļ��������Ĵ���
void test()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);
	printf("˯��10��-�Ѿ�д�����ˣ����Ǵ�test.txt�ļ��������ļ�û������\n");
	Sleep(10000);


	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»������������������������д���ļ�
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ�����������\n");
	Sleep(10000);


	fclose(pf);
	pf = NULL;
	return 0;
}