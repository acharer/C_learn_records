#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//goto���ֻ����ͬһ������������ת�����ܿ纯��
int main()
{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;

	//�Ƚ��ʺ��������Ƕ��ѭ��
	//for(...)
	//	for (...)
	//	{
	//		for (...)
	//			if (disaster)
	//				goto error;
	//	}
	//	...
	//error:
	//	if(disaster)
	//		//�������

	char input[20] = { 0 };
	//system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Լ�����60���ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		//systm("shutdow -a");
	}
	else
	{
		goto again;
	}

	return 0;
}