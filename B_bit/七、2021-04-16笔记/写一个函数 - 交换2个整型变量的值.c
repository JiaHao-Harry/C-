//写一个函数 - 交换2个整型变量的值
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回


//int main()
//{
//	int a = 10;//4个字节的空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}

//swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
//改变形参，不能改变实参
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
	//写一个函数 - 交换2个整型变量的值

	Swap1(a, b);//传值调用
	printf("交换前：a=%d b=%d\n", a, b);
	Swap2(&a, &b);//传址调用
	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}