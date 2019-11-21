//折半查找数组中的数字,存在返回下标,不存在返回-1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 12;
	int mid = 0;
	while (left <= right)
	{
		mid = left + (right - left) / 2; //取中间元素下标，不建议采用mid=(left+right)/2,若和过大，可能会溢出。
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left <= right)
	{
		printf("找到了，下标是%d\n", mid);
	}
	else
	{
		printf("没找到\n");
		system("pause");
		return  -1;
	}
	system("pause");
	return 0;
}
