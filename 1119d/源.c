//在屏幕上输出有规律的图案
#include<stdio.h>
int main( ) {
	int i = 0;
	int j = 0; for (i = 0; i <10; i++)
	{
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <16 - 2 * i ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
