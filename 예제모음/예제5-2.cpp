#include <stdio.h> //단일 for문의 활용
int main(void) {
	int i, s = 0;
	for (i = 1; i <= 10; i++) {
		printf(" i = %d\n", i);
		s += i;
	}
	printf(" 1 -> %d = %d \n", i-1, s);
	return 0;
}