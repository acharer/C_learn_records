#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

void test();

/*
文件读取结束的判定
	文本文件
	fgetc判断是否为EOF
	fgets判断返回值是否为NULL
	二进制文件
	fread返回值是否小于实际要读的个数

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

//证明文件缓冲区的存在
void test()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);
	printf("睡眠10秒-已经写数据了，但是打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);


	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区，将输出缓冲区的数据写到文件
	printf("在睡眠10秒-此时，再次打开test.txt文件，文件就有内容了\n");
	Sleep(10000);


	fclose(pf);
	pf = NULL;
	return 0;
}