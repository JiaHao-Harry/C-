//写一个代码：打印100~200之间的素数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//素数 - 质数
//只能被1和它本身整除
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//
//		if (i == j)
//		{
//			printf("%d ", i);//素数
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//
//	//m = a*b
//	//a和b中一定至少有一个数字是 <= 开平方m的
//	//16 = 2*8 = 4*4
//
//	//sqrt - 是开平方的函数 - math.h
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



#include <math.h>

int main()
{
	int count = 0;
	int i = 0;

	//m = a*b
	//a和b中一定至少有一个数字是 <= 开平方m的
	//16 = 2*8 = 4*4

	//sqrt - 是开平方的函数 - math.h
	for (i = 101; i <= 200; i+=2)
	{
		//判断i是否为素数
		//2->i-1之间的数字去试除i,看能不能整除
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//不是素数
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//素数
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}