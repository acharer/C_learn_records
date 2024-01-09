#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// sizeof
// sizeof是一个操作符
// 是用来计算变量(类型)所占内存空间的大小，不关注内存中存放的具体内容
// 单位是字节
// 
// strlen
// strlen是一个库函数，是专门求字符串长度的，只能针对字符串
// 从参数给定的地址向后一直找\0，统计\0之前出现的字符的个数
//


int main()
{
	char str[] = "hello bit";
	printf(("%d %d\n", sizeof(str), strlen(str)));

	return 0;
}