//写一个函数，实现一个整型有序数组的二分查找
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到了
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	//找到了就返回找到的位置的下标
	//找不到返回-1
	//数组arr传参，实际传递的不是数组的本身
	//仅仅传过去了数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}