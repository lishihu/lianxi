//��д������һ��1��100����������9���ֵĸ���
#include<stdio.h>
int main( ) {
	int i ;
	int temp = 0;
	for (i = 1; i <= 100; i++) {//����9�ܹ��������ôﵽ,qu����Ϊ9��Ϊ����
		
		if (i % 10 == 9) {
			temp++;
		}
		if (i / 10 % 10 == 9) {
			temp++;
		}
	}
	printf("%d", temp);//���ܷ���ѭ���������
	system("pause");
	return 0;
}