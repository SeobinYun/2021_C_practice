#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
int primeNumber(int);
void output(int, int);
int main(void) {
	int n = 0, cnt = 0, total = 0;
	n = input();
	printf("1~%d������ �Ҽ� ���� ������ �����ϴ�.\n", n);
	for (int i = 2; i <= n; i++) {
		if (primeNumber(i)) {
			printf("%d\t", i);
			cnt++;
			if (cnt == 5) {
				printf("\n");
				cnt = 0;
				total++;
			}
			else { ; }
		}
		else { ; }
	}
	printf("\n");
	total = (total * 5) + cnt;
	output(n, total);
	return 0;
}
int input(void) {
	int num = 0, r = 0;
	while (1) {
		printf("*������ �ϳ��� �Է��Ͻÿ� : ");
		r = scanf("%d", &num);
		if (r == 1) {
			break;
		}
		else {
			;
		}
	}
	return num;
}
int primeNumber(int n) {
	for (int i = 2; i <= (n/2); i++) {
		if (n % i == 0) {
			return 0;
		}
		else {
			continue;
		}
	}
	return 1;
}
void output(int n, int total) {
	printf("1~%d������ �� �Ҽ��� %d�� �Դϴ�.\n", n, total);
}