#include<stdio.h>
int main() {
	int a[5] = {1,2,3,4,5 };
	int b[5] = {6,7,8,9,10};
	//������������,����������
	int i;
	int temp;
	for (i = 0; i < 5; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;//�������������,ѭ����������Ԫ��
	}
	for (i = 0; i < 5; i++) {
		printf("%d",a[i]);
			}
	putchar('\n');//�����ű�ʾ����ַ�
	for (i = 0; i < 5; i++) {
		printf("%d", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;

}
