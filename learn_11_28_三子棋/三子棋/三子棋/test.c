#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
void menu()
{
	printf("*************************************\n");
	printf("********   1.play  0.exit   *********\n");
	printf("*************************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));//������������������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�������\n");
				break;
		}

	} while(input);


	return 0;
}