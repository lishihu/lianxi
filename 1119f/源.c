//求sn之和
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b = 0;
	int i = 0;
	int sn = 0;
	int j = 1;
	printf("请输入a的值;");
	scanf("%d", &a);
	b = a;
	for (i = 1; i < 6; i++) {
		sn = sn + a;
		j = j * 10;
		a = b*j + a;
	}
	printf("sn=%d", sn);
	system("pause");
	return 0;
}