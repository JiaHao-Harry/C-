//дһ�������ӡ1 - 100֮������3�ı���������
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	//�ж�i�Ƿ�Ϊ3�ı���
	//	if (i % 3 == 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}

	for (i = 3; i <= 100; i+=3)
	{
		printf("%d ", i);
	}

	return 0;
}