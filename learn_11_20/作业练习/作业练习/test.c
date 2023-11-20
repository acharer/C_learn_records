#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	//int i = 1;

	//do
	//{
	//	if (i == 5)
	//		break;
	//	i++;
	//	printf("%d ", i);
	//} while (i <= 10);
//计算n的阶乘
	//{
	//	int i = 1;
	//	int n = 0;
	//	int ret = 1;

	//	scanf("%d", &n);
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	printf("%d\n", ret);
	//}
//计算1！+2！+3！+...+10！
	//{
	//	int i = 1;
	//	int n = 0;
	//	int ret = 1;
	//	int sum = 0;

	//	scanf("%d", &n);
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret*i;
	//		sum = sum + ret;
	//	}
	//	printf("%d\n", sum);
	//}
//有序数组查找某个数字n
	//遍历查找
	//{
	//	int i = 0;
	//	int n = 0;
	//	int arr[] = { 0,1,2,3,5,6,9,16,25,36,94 };
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	scanf("%d", &n);
	//	for (i = 0; i < sz; i++)
	//	{
	//		if (arr[i] == n)
	//		{
	//			printf("找到了，数组下标为 n=%d\n", i);
	//			break;
	//		}	
	//	}
	//	if (i == sz)
	//	{
	//		printf("没找到\n");
	//	}
	//}
	//二分查找
	//{
	//	int n;
	//	scanf("%d", &n);
	//	int arr[] = { 0,2,5,6,9,11,15,18,22,32,47,52,61,87,93 };
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	int low = 0;
	//	int high = sz - 1;
	//	int mid = (low + high) / 2;//这样写更好，low + (high-low)/2，不会因为low+high太大而越界
	//	while (low <= high)
	//	{
	//		if (arr[mid] < n)
	//		{
	//			low = mid + 1;
	//			mid = (low + high) / 2;
	//		}
	//		else if (arr[mid] > n)
	//		{
	//			high = mid - 1;
	//			mid = (low + high) / 2;
	//		}
	//		else
	//		{
	//			printf("找到了，数组下标n=%d\n", mid);
	//			break;
	//		}
	//	}
	//	if (low > high)
	//		printf("没找到");
	//}
//编写代码，演示多个字符从两端移动，向中间汇聚
	//welcome to bit!!!!
	//w################!
	//we##############!!
	//wel############!!!
	//...
	//welcome to bit!!!!
	//{
	//	char arr1[] = "welcome to bit!!!!";
	//	char arr2[] = "##################";

	//	int left = 0;
	//	int right = strlen(arr1) - 1;

	//	while (left <= right)
	//	{
	//		arr2[left] = arr1[left];
	//		arr2[right] = arr1[right];

	//		printf("%s\n", arr2);
	//		Sleep(1000);
	//		system("cls");//system是一个库函数，可以执行系统命令
	//		left ++;
	//		right --;
	//	}
	//	printf("%s\n", arr2);

	//}
//编写代码，模拟用户登录场景，并且只能登录三次（只允许输入三次密码，如果密码正确）
//则提示登陆成功，如果三次均输入错误，则退出程序

//比较两个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//如果返回值是0，表示两个字符串相等
	{
		char password[] = "password";
		char input[20] = { 0 };
		int i = 0;
		int flag;
		for (i = 0; i < 3; i++)
		{
			scanf("%s", input);
			if (strcmp(password, input) == 0)
			{
				printf("登陆成功\n");
				break;
			}
			else
			{
				printf("输入错误\n");
			}
		}
		if (i == 3)
		{
			printf("三次机会都未成功");
		}
	}
	return 0;
}