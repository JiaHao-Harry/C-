//дһ������ - ����2�����ͱ�����ֵ
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����


//int main()
//{
//	int a = 10;//4���ֽڵĿռ�
//
//	int* pa = &a;//pa����һ��ָ�����
//	*pa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//�ı��βΣ����ܸı�ʵ��
//void Swap1(int x, int y)//
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//
void Swap2(int* pa, int* pb)//
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	//дһ������ - ����2�����ͱ�����ֵ

	Swap1(a, b);//��ֵ����
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap2(&a, &b);//��ַ����
	printf("������a=%d b=%d\n", a, b);

	return 0;
}