//��ӡ1000�굽2000��֮�������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1. ��4���������ܱ�100����������
//		//2. �ܱ�400����������
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//�ж�y�ǲ�������
		//1. ��4���������ܱ�100����������
		//2. �ܱ�400����������
		if (((y%4==0) && (y%100!=0)) || (y%400==0))
		{
			printf("%d ", y);
			count++;
		}
	}

	printf("\ncount = %d\n", count);

	return 0;
}