#include <stdio.h>
int main(void) {
	for (int j = 0; j < 10; j++) {
		for (int i = 0+j; i < 100; i += 10) {
			printf("%4d", i);
		}
		printf("\n");
	}
	return 0;
}