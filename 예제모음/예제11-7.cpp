//숫자배열의 포인터 표현
#include <stdio.h>
int main(void) {
	int a[3][2] = { {1,2},{3,4},{5,6} };
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("\n *(a+%d) : %p\t", i, *(a + i));
		for (j = 0; j < 2; j++) {
			printf("%5d", *(*(a + i) + j));
		}
	}
	return 0;
}