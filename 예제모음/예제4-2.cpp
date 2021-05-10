#include <stdio.h>  //float형 변수값의 서식화 출력
int main(void) {
	float x = 22.17;
	printf("1234567890123456\n");
	printf("=%f=\n", x);
	printf("=%10.4f=\n", x);
	printf("=%-10.4f=\n", x);
	printf("=.2%f=\n", x);
	return 0;
}