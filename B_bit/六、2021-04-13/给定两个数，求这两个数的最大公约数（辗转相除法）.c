//给定两个数，求这两个数的最大公约数（辗转相除法）
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);//24 18
	int t = 0;

	while (t=m%n)
	{
		m = n;
		n = t;
	}
	printf("最大公约数：%d\n", n);

	//最小公倍数 = m*n/最大公约数;

	return 0;
}