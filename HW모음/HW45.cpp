#include <stdio.h>
#pragma warning(disable:4996)
void inputRange(int*, int*);
char eoro(int, int);
void output(char, int, int);
int main(void) {
	int a = 0, b = 0;
	char c;
	inputRange(&a, &b);
	c = eoro(a, b);
	output(c, a, b);
	return 0;
}
void inputRange(int *a, int *b) {
	printf("# ���� ���� �Է��Ͻÿ� : ");
	scanf("%d", a);
	while (1) {
		printf("# �� ���� �Է��Ͻÿ� : ");
		scanf("%d", b);
		getchar();
		if (*b > *a) {
			break;
		}
	}
}
char eoro(int a, int b) {
	char c = '\0';
	while (1) {
		printf("* %d~%d ������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��? (¦��:e/Ȧ��:o) : ", a, b);
		scanf("%c", &c);
		getchar();
		if (c == 'e' || c == 'o') {
			break;
		}
		else {
			continue;
		}
	}
	return c;
}
void output(char c, int a, int b) {
	int sum = 0;
	if (c == 'o') {
		printf("��%d~%d ������ Ȧ��(", a, b);
		for (int i = a; i <= b; i++) {
			if (i % 2 != 0) {
				printf("%d ", i);
				sum += i;
			}
			else
				;
		}
		printf(")�� ���� %d �Դϴ�.", sum);
	}
	else if (c == 'e') {
		printf("��%d~%d ������ ¦��(", a, b);
		for (int i = a; i <= b; i++) {
			if (i % 2 == 0) {
				printf("%d ", i);
				sum += i;
			}
			else
				;
		}
		printf(")�� ���� %d �Դϴ�.", sum);
	}
	else
		;
}
