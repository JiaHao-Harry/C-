//дһ�����������ж�һ�����ǲ�������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <math.h>


int is_prime(int n)
{
	//2->n-1 ֮�������
	int j = 0;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
		return 0;
	}
	return 1;
}

int main()
{
	//100-200֮�������
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);

	return 0;
}