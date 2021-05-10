#include <stdio.h>
int main(void) {
	int a = 2, b = 1;
	printf("<2중 for문을 이용한 출력>\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 5; j++) {
			printf("%d * %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 6; j <= 9; j++) {
			printf("%d * %d = %d\t", j, i, j * i);
		}
		printf("\n");
	}
	printf("----------------------------------------------------------\n\n");
	printf("<3중 for문을 이용한 출력>\n");
	for (int k = 0; k <= 1; k++) {
		for (int i = 1; i <= 9; i++) {
			for (int j = 4*k+2; j <= 4*k+5; j++) {
				printf("%d * %d = %d\t", j, i, j * i);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}