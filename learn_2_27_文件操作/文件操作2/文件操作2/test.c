#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct S
{
	char arr[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan",20,55.5f };
	struct S tmp = {0 };

	char buf[100] = { 0 };
	//��s�еĸ�ʽ������ת�����ַ�����ŵ�buf��
	sprintf(buf, "%s %d %f\n", s.arr, s.age, s.score);
	printf("%s\n", buf);
	//���ַ���buf�л�ȡһ����ʽ�������ݵ�tmp��
	sscanf(buf, "%s %d %f\n", tmp.arr, &(tmp.age),&(tmp.score));
	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.score);
	return 0;
}