#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void Game() {
	while (1) {
		//���׽���
		printf("\n              ��������Ϸ\n");
		printf("*****************************************\n");
		printf("*               1.��ʼ��Ϸ              *\n");
		printf("*               2.������Ϸ              *\n");
		printf("*****************************************\n");

		int a;
		scanf("%d", &a);
		if (a == 1) {
			printf("��������Ҫ�²�ķ�Χ 0~ ");
			int num;
			scanf("%d", &num);
			int result = rand() % num + 1;

			printf("��Ϸ��ʼ\n");

			while (1) {
				int b;
				scanf("%d", &b);

				if (b < result) {
					printf("��С��\n");
				}
				else if (b > result) {
					printf("�´���\n");
				}
				else {
					printf("���ţ�3�����Ũq���¶���\n\n");
					break;
				}
			}

		}
		else if (a == 2) {
			printf("��Ϸ����\n");
			break;
		}
		else {
			printf("���������������\n");
		}
	}
}

int main() {

	srand((unsigned)time(0));
	Game();
	system("pause");
	return 0;
}
