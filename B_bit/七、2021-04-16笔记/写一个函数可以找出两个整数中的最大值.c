//дһ�����������ҳ����������е����ֵ
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;//����z-���ؽϴ�ֵ
}
int main()
{
	int a = 10;
	int b = 20;
	//�����ĵ���
	//int max = get_max(a, b);
	//int max = get_max(2+5, 3);//
	int max = get_max(2 + 5, get_max(4, 7));

	printf("max = %d\n", max);
	return 0;
}