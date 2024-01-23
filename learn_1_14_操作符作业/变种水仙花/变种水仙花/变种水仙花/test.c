#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//把任意数字拆成两个数字，如1461可拆成（1和461）（14和61）（146和1）
//如果拆分后的两部分乘积等于自身，则该数字为变种水仙花
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		int j = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = pow(10, j);
			sum += (i % k) * (i / k);
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}