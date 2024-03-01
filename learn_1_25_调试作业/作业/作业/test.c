#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main()
{
	
	return 0;
}
