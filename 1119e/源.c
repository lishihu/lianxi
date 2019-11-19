//水仙花数
#include<stdio.h>
int main( ) {
	int i = 0;
	int a, b, c = 0;
	int sum = 0;
	for (i = 1; i < 1000; i++) {
		a = i /100;
		b = i %100/10;
		c = i % 10;
		sum = a*a*a + b*b*b + c*c*c;
		if (sum ==i) {
			printf("水仙花数%d",i);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}