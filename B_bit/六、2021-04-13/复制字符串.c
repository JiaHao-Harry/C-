#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);
	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ

	return 0;
}