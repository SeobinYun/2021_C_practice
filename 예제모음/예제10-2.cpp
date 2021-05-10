//매크로 함수의 사용
#include <stdio.h>
#define SWAP(x,y) {int t; t=x; x=y; y=t;}
int main(void) {
	int a = 5, b = 10;
	printf("a = %d\t b = %d\n", a, b);
	SWAP(a, b);
	printf("a = %d\t b = %d\n", a, b);
	return 0;
}