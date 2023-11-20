#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//goto语句只能在同一个函数域内跳转，不能跨函数
int main()
{
//again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;

	//比较适合跳出多层嵌套循环
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
	//		//处理错误

	char input[20] = { 0 };
	//system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑即将在60秒内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		//systm("shutdow -a");
	}
	else
	{
		goto again;
	}

	return 0;
}