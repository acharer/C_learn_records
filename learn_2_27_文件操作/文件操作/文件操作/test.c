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
//	//д�ļ�
//	//char i = 0;
//	//for (i = 'a'; i < 'z'; i++)
//	//{
//	//	fputc(i, pf);
//	//}
//	//���ļ�
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
//	//�ر��ļ�
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
//	//дһ������
//	//fputs("hello world\n",pf);
//	//fputs("hello world2\n", pf);
//
//	//��һ������
//	char arr[20];
//	fgets(arr, 5, pf);
//
//	printf("%s", arr);//hell\0
//	//�ر��ļ�
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
//	//д��ʽ����
//	//fprintf(pf, "%s %d %f", s.arr, s.age, s.score);
//	
//	//����ʽ����
//	fscanf(pf,"%s %d %f", s2.arr, &(s2.age), &(s2.score));
//	
//	//printf("%s %d %f", s2.arr, s2.age, s2.score);
//	fprintf(stdout, "%s %d %f", s.arr, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

/*
��
FILE

�κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3������
FILE* stdin - ��׼������������)
FILE* stdout - ��׼���������Ļ)
FILE* stderr - ��׼����������Ļ)
*/

//�����ƶ�д
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

	//�Զ����Ƶĸ�ʽд����
	//fwrite(&s, sizeof(struct S), 1, pf);

	//�Զ����Ƶĸ�ʽ������
	fread(&s2, sizeof(struct S), 1, pf);
	printf("%s %d %f", s2.arr, s2.age, s2.score);

	//printf("%s %d %f", s2.arr, s2.age, s2.score);
	//fprintf(stdout, "%s %d %f", s.arr, s.age, s.score);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}