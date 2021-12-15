//goto 语句只能在一个函数范围内跳转，不能跨函数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void test()
{
flag:
	printf("test\h");
}

int main()
{
	goto flag;
	return 0;
}