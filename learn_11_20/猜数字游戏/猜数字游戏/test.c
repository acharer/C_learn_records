#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���Բ���һ���������1-100��
// ������
// �´���
// ��С��
// �����ˡ�����
//

void menu()
{
	printf("*****************************\n");
	printf("***********1.Play************\n");
	printf("***********0.Exit************\n");
	printf("*****************************\n");
}

void game()
{
	int guess = 0;
	//���������
	int ret = rand()%100+1;//0~RAND_MAX(32767),ȡģ100��ķ�Χ����1~100
	//������
	printf("�뿪ʼ������");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ʹ��rand����֮ǰ��Ӧ������srand������Ϊ�������
	                                //��������������

	do
	{
		menu();
		printf("�����룺>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������1��2��ѡ��ʼ���˳���Ϸ\n");
			break;
		}
	} while (input);
	return 0;
}