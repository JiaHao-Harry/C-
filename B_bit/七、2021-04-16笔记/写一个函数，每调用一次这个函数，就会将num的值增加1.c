//写一个函数，每调用一次这个函数，就会将num的值增加1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);           //函数要改变外部变量的值，只能传址。
	printf("%d\n", num);//1
	Add(&num);
	printf("%d\n", num);//2
	Add(&num);
	printf("%d\n", num);//3
	return 0;
}