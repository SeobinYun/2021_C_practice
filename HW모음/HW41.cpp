#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int n = 0;
	printf("# 출력 라인수를 입력하시오 : ");
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