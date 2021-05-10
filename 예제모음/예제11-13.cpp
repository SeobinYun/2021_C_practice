//함수 포인터 예제
#include <stdio.h>
int plus(int, int);
int main(void) {
	int a = 10, b = 20;
	int res = 0;
	int (*fptr)(int, int);
	fptr = plus;
	res = fptr(a, b);
	printf("%d + %d = %d\n", a, b, res);
	return 0;
}
int plus(int x, int y) {
	return x + y;
}
