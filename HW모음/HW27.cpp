#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
int main(void) {
	int gram;
	int i=0;
	while (i < 10) {
		gram = input();
		if (gram < 150) {
			printf("* ���߸��� ������ �峭���� ���ÿ�~ ^^\n");
			continue;
		}
		else if (gram > 500) {
			printf("* Ÿ���� ������ �峭���� ���ÿ�~ ^^\n");
			continue;
		}
		else {
			i++;
			printf("* ���� �ް��� ��: %d\n", i);
		}
	}
	printf("\n*** �ް� ������ �������ϴ�.\n");
	return 0;
}
int input() {
	int g;
	printf("# ����� ���Ը� �Է��ϼ���(���� : g) : ");
	scanf("%d", &g);
	return g;
}