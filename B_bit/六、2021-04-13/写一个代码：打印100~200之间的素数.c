//дһ�����룺��ӡ100~200֮�������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���� - ����
//ֻ�ܱ�1������������
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
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
//			printf("%d ", i);//����
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
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
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
//	//a��b��һ��������һ�������� <= ��ƽ��m��
//	//16 = 2*8 = 4*4
//
//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
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
	//a��b��һ��������һ�������� <= ��ƽ��m��
	//16 = 2*8 = 4*4

	//sqrt - �ǿ�ƽ���ĺ��� - math.h
	for (i = 101; i <= 200; i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
		int j = 0;
		int flag = 1;//����i��������
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;//��������
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);//����
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}