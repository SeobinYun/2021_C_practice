#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int n = 0;
	printf("# ��� ���μ��� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int j = 0; j < (n - i) * 2; j++) {
				printf("%.*s",j, " ");
			}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}