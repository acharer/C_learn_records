#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//whileѭ���е�
//break���������õ���ֹѭ��
// continue ��������ѭ������Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
//
int main()
{
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (5 == i)
	//	{
	//		i++;
	//		continue;
	//	}
	//	printf("%d ", i);
	//	i++;

	//	if (8 == i)
	//	{
	//		break;
	//	}
	//	
	//}

	//int ch = getchar();
	//printf("%c\n", ch);
	//putchar(ch);
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//ctrl+z�˳�
	//{
	//	putchar(ch);
	//}

	//��һ������
	//����������һ���ַ���
	//char password[20] = { 0 };
	//printf("����������:>");
	//scanf("%s", password);//scanf�ڴӻ������õ�ʱ�򣬻�ʣ��һ��\n��һ��getchar����
	//������Ϊabcde fgʱ��scanf�����ո�Ͳ����ˣ���һ��getchar�����߿ո�
	
	//getchar();//getchar����\n
	//int ch = 0;
	//while ((ch = getchar()) != '\n')//getcharһֱ�ã�ֱ��������\n
	//{
	//	;
	//}
	//printf("��ȷ������(Y/N:>)");
	//int ret = getchar();
	//if ('Y' == ret)
	//{
	//	printf("YES\n");
	//}
	//else
	//{
	//	printf("NO\n");
	//}
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch >'9')
			continue;
		putchar(ch);
	}

	return 0;
}