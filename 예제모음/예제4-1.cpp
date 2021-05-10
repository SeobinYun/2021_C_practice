#include <stdio.h> //int형 변수값의 서식화 출력
int main(void) {
	int x = 12345;
	printf("1234567890\n");
	printf("=%d=\n", x);
	printf("=%8d=\n", x);
	printf("=%-8d=\n", x);
	printf("=%3d=\n", x);
	return 0;
}