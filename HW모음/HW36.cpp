#include <stdio.h>
int main(void) {
	for (int i = 1; i <= 100; i++) {
		if ((i % 3 == 0) && (i % 5 == 0)) {
			printf("%4d", i);
		}
		else if (i % 3 == 0) {
			printf("  * ");
		}
		else if (i % 5 == 0) {
			printf("  # ");
		}
		else {
			printf("%4d", i);
		}
		if (i % 10 == 0) {
			printf("\n");
		}
	}
	return 0;
}