#include <stdio.h>
int main(void) {
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("%3d", j);
		}
		printf("\n");
	}
	return 0;
}