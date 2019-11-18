//交换两个数组的内容,luojiyunsuan shixian
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()

{
	int i, j, k;

	int A[10];

	int B[10];

	int C[10];

	printf("请输入A数组的内容：\n");

	for (i = 0; i<10; i++)

	{
		scanf("%d", &A[i]);
	}

	printf("请输入B数组的内容：\n");

	for (j = 0; j<10; j++)

	{
		scanf("%d", &B[j]);
	}

	for (k = 0; k<10; k++)

	{
		A[k] = A[k] + B[k];      //逻辑运算交换各元素的值 ，"^"也可改成"+,_"同样可以实现交换

		B[k] = A[k] + B[k];      //例如： A[k]=A[k]+B[k];

		A[k] = A[k] + B[k];                     B[k] = A[k] - B[k];

	}                                           A[k] = A[k] - B[k];



	printf("互换后的A数组为:\n");

	for (i = 0; i<10; i++)

	{
		printf("%d ", A[i]);
	}

	printf("\n");

	printf("互换后的B数组为:\n");

	for (j = 0; j<10; j++)

	{
		printf("%d ", B[j]);
	}

	printf("\n");

	return 0;

}
