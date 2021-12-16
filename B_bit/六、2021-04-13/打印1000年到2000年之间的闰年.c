//打印1000年到2000年之间的闰年
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1. 被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
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
		//判断y是不是闰年
		//1. 被4整除，不能被100整除是闰年
		//2. 能被400整除是闰年
		if (((y%4==0) && (y%100!=0)) || (y%400==0))
		{
			printf("%d ", y);
			count++;
		}
	}

	printf("\ncount = %d\n", count);

	return 0;
}