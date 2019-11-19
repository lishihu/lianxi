//编写程序数一下1到100的所有整数9出现的个数
#include<stdio.h>
int main( ) {
	int i ;
	int temp = 0;
	for (i = 1; i <= 100; i++) {//除以9能够整除不好达到,qu余数为9较为容易
		
		if (i % 10 == 9) {
			temp++;
		}
		if (i / 10 % 10 == 9) {
			temp++;
		}
	}
	printf("%d", temp);//不能放在循环里面输出
	system("pause");
	return 0;
}