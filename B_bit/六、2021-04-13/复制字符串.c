#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);
	printf("%s", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印

	return 0;
}