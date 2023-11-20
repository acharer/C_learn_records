#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	for (int year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
			printf("ÈòÄê£º%d\n", year);
	}

	return 0;
}