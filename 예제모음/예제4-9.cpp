#include <stdio.h>  //사용자 지정 구분자의 사용
#pragma warning(disable:4996)
int main(void) {
	int a, b, c;
	int res;
	res = scanf("%d:%d:%d", &a, &b, &c); // : 사용자 지정문자
	printf("res=%d, a=%d, b=%d, c=%d\n", res, a, b, c);
	return 0;
}