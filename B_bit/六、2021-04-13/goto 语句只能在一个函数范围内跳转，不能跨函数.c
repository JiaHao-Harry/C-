//goto ���ֻ����һ��������Χ����ת�����ܿ纯��
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