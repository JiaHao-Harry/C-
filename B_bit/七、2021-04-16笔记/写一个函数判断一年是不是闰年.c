//дһ�������ж�һ���ǲ�������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//is_leap_year
//����ж������귵��1
//�������꣬����0

//һ�����������д�������ͣ�Ĭ�Ϸ���int����

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}

int is_leap_year(int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}

	return 0;
}