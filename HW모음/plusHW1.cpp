#include <stdio.h>
int main(void) {
	int i, j, sum=0;
	for (i = 10; i <= 100; i+=10) {
		for (j = 1; j <= i; j++) {
			sum = sum + j;
		}
		printf(" 1 ~ %d = %d\n", i, sum);
		sum = 0;
	}
	return 0;
}