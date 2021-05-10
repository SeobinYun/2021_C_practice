#include <stdio.h> //세가지 진법의 사용
int main(void) {
	int x = 10, y = 010, z = 0x10;
	printf("x의 값 : %d %o %x\n", x, x, x);
	printf("x의 값 : %d %o %x\n", y, y, y);
	printf("x의 값 : %d %o %x\n", z, z, z);
	return 0;
}