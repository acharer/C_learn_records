#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	//���ļ�
	//��λ�ļ�ָ��
	fseek(pf, 2, SEEK_SET);
	int ch = fgetc(pf);
	printf("%c\n", ch);
	printf("%d\n", ftell(pf));


	//fseek(pf, 2, SEEK_CUR);
	fseek(pf, -1, SEEK_END);
	ch = fgetc(pf);
	printf("%c\n", ch);

	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);
	//�ر��ļ�
	fclose(pf);
	pf == NULL;

	return 0;
}