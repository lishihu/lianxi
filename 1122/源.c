#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char key[] = "lishihu";
	char arr[20] = {0};
	int i = 0;
	for (i = 3; i > 0 && i < 4; i--) {
		printf("请输入密码\n");
		scanf("%s", &arr);
		if (0 == strcmp(key, arr)) {
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误\n");
			printf("你还有%d次机会\n", i - 1);
		}
		system("pause");
		return 0;
	}
}