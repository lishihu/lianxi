//�۰���������е�����,���ڷ����±�,�����ڷ���-1
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
		mid = left + (right - left) / 2; //ȡ�м�Ԫ���±꣬���������mid=(left+right)/2,���͹��󣬿��ܻ������
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
		printf("�ҵ��ˣ��±���%d\n", mid);
	}
	else
	{
		printf("û�ҵ�\n");
		system("pause");
		return  -1;
	}
	system("pause");
	return 0;
}
