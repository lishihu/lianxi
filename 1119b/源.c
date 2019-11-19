//计算一个序列的和
#include<stdio.h>
int main(){
	int sum = 0;
	int n = 10;
	int temp = 1;
	int i = 1;
	for (i = 1; i <= n; i++) {
		temp *= i;
		sum += temp;

	}
	printf("%d\n", sum);
	system("pause");
		return 0;
}