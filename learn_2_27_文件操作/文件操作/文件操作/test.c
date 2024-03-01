#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写文件
//	//char i = 0;
//	//for (i = 'a'; i < 'z'; i++)
//	//{
//	//	fputc(i, pf);
//	//}
//	//读文件
//	/*int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);*/
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//fputs fgets
//int main()
//{
//
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//
//	//写一行数据
//	//fputs("hello world\n",pf);
//	//fputs("hello world2\n", pf);
//
//	//读一行数据
//	char arr[20];
//	fgets(arr, 5, pf);
//
//	printf("%s", arr);//hell\0
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	char arr[10];
//	int age;
//	float score;
//};
////fprintf fscanf
//int main()
//{
//	struct S s = { "zhangsan",25,50.5f };
//	struct S s2 = {0 };
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//
//		perror("fopen");
//		return 1;
//	}
//
//	//写格式数据
//	//fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//	
//	//读格式数据
//	fscanf(pf,"%s %d %f", s2.arr, &(s2.age), &(s2.score));
//	
//	//printf("%s %d %f", s2.arr, s2.age, s2.score);
//	fprintf(stdout, "%s %d %f", s.arr, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

/*
流
FILE

任何一个C程序，只要运行起来就会默认打开3个流：
FILE* stdin - 标准输入流（键盘)
FILE* stdout - 标准输出流（屏幕)
FILE* stderr - 标准错误流（屏幕)
*/

//二进制读写
struct S
{
	char arr[10];
	int age;
	float score;
};
int main()
{
	struct S s = { "zhangsan",25,50.5f };
	struct S s2 = { 0 };
	FILE* pf = fopen("test3.txt", "rb");
	if (pf == NULL)
	{

		perror("fopen");
		return 1;
	}

	//以二进制的格式写数据
	//fwrite(&s, sizeof(struct S), 1, pf);

	//以二进制的格式读数据
	fread(&s2, sizeof(struct S), 1, pf);
	printf("%s %d %f", s2.arr, s2.age, s2.score);

	//printf("%s %d %f", s2.arr, s2.age, s2.score);
	//fprintf(stdout, "%s %d %f", s.arr, s.age, s.score);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}