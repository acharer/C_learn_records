#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

size_t my_strlen(const char* str)
{
	size_t count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.找到目标空间的末尾\0
	while (*dest != '\0')
	{
		dest++;
	}
	//2.拷贝字符串
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;

	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;
		}
		p++;
	}
	return NULL;
}

int main()
{
	char arr[] = "abcdef";
	size_t n = my_strlen(arr);
	printf("%d\n", n);

	char name1[] = "abcdef";
	char name2[20] = { 0 };
	my_strcpy(name2, name1);
	printf("%s\n", name2);

	char arr1[20] = "hello ";
	my_strcat(arr1, "world");
	printf("%s\n", arr1);

	char arr2[] = "abc";
	char arr3[] = "abcd";
	int ret = my_strcmp(arr2, arr3);
	if (ret < 0)
		printf("<\n");
	else if (ret == 0)
		printf("==\n");
	else
		printf(">\n");


	char email[] = "zzw@baidu.com";
	char substr[] = "baidu";
	char* ret = my_strstr(email, substr);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	const char* sep = "@.";
	char email2[] = "zzw@baidu.com";
	char cp[30] = { 0 };
	strcpy(cp, email2);

	char* ret = NULL;
	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}

	FILE* pf = foren("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	return 0;
}