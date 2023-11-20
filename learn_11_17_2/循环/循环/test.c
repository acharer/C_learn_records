#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//while循环中的
//break是用于永久的终止循环
// continue 跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
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
	//while ((ch = getchar()) != EOF)//ctrl+z退出
	//{
	//	putchar(ch);
	//}

	//举一个例子
	//假设密码是一个字符串
	//char password[20] = { 0 };
	//printf("请输入密码:>");
	//scanf("%s", password);//scanf在从缓冲区拿的时候，会剩下一个\n下一个getchar拿走
	//当输入为abcde fg时，scanf遇到空格就不拿了，下一个getchar会拿走空格
	
	//getchar();//getchar拿走\n
	//int ch = 0;
	//while ((ch = getchar()) != '\n')//getchar一直拿，直到拿走了\n
	//{
	//	;
	//}
	//printf("请确认密码(Y/N:>)");
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