#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
//����ʽ�����������
	//{
	//	//��������
	//	int year = 0;
	//	int month = 0;
	//	int date = 0;
	//	scanf("%4d%2d%2d", &year, &month, &date);

	//	//���
	//	printf("year=%d\n", year);
	//	printf("month=%02d\n", month);//%02d,�����λ���������ǰ�油��0
	//	printf("month=%02d\n", date);
	//}
//ѧ��������Ϣ�������
	//{
	//	int id = 0;
	//	float c = 0.0f;
	//	float math = 0.0f;
	//	float eng = 0.0f;
	//	//����
	//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
	//	//���
	//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, eng);


	//}
//�������
	{
		int arr[4] = { 0 };
		int i = 0;
		while (i < 4)
		{
			scanf("%d", &arr[i]);
			i++;
		}
		int max = arr[0];
		i = 1;
		while (i < 4)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
			i++;
		}
		printf("%d\n", max);
		printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);
	}
	return 0;
}