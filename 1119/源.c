#include<stdio.h>
int main() {
	int a[5] = {1,2,3,4,5 };
	int b[5] = {6,7,8,9,10};
	//定义两个数组,并交换内容
	int i;
	int temp;
	for (i = 0; i < 5; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;//定义第三个变量,循环交换数组元素
	}
	for (i = 0; i < 5; i++) {
		printf("%d",a[i]);
			}
	putchar('\n');//单引号表示获得字符
	for (i = 0; i < 5; i++) {
		printf("%d", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;

}
