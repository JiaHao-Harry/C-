//写一个函数可以找出两个整数中的最大值
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//返回z-返回较大值
}
int main()
{
	int a = 10;
	int b = 20;
	//函数的调用
	//int max = get_max(a, b);
	//int max = get_max(2+5, 3);//
	int max = get_max(2 + 5, get_max(4, 7));

	printf("max = %d\n", max);
	return 0;
}