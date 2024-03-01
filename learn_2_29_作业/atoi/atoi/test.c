#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <limits.h>

//1.空指针
//2.空字符串
//3.空格
//4.+-
//5.越界
//6.非数字字符
//

enum Status
{
	VALID,
	INVALID
}sta = INVALID;//默认非法

int my_atoi(const char* str)
{
	int flag = 1;

	assert(str);
	if (*str == '\0')
		return 0;//非法0
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + flag*(*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				return 0;
			}
		}
		else
		{
			return ret;
		}	
		str++;
	}
	if (*str == '\0')
	{
		sta = VALID;
	}
	
	return (int)ret;
}

int main()
{
	char arr[20] = "+123111abc";
	int ret = my_atoi(arr);


	if (sta == INVALID)
	{
		printf("非法返回：%d\n", ret);
	}
	else if (sta == VALID)
	{
		printf("合法返回：%d\n", ret);

	}


	return 0;
}