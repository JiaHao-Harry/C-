//给定两个数，求这两个数的最大公约数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);//24 18
	int max = 0;
	//假设最大公约数max就是m和n的较小值
	if (m > n)
		max = n;
	else
		max = m;
	
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("最大公约数就是：%d\n", max);
			break;
		}
		max--;
	}

	return 0;
}