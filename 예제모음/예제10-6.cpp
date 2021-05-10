//매크로함수와 일반함수의 차이
#include <stdio.h>
#define SQUARE(x) x*x  //(x)*(x)로 수정해보자
int square(int);
int main(void) {
	int res;
	res = square(3 + 4);
	printf("일반 함수를 이용한 3+4의 거듭제곱 : %d\n", res);
	res = SQUARE(3 + 4);
	printf("매크로 함수를 이용한 3+4의 거듭제곱 : %d\n", res);
	return 0;
}
int square(int x) {
	return x * x;
}