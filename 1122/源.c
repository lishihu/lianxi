#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char key[] = "lishihu";
	char arr[20] = {0};
	int i = 0;
	for (i = 3; i > 0 && i < 4; i--) {
		printf("����������\n");
		scanf("%s", &arr);
		if (0 == strcmp(key, arr)) {
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������\n");
			printf("�㻹��%d�λ���\n", i - 1);
		}
		system("pause");
		return 0;
	}
}