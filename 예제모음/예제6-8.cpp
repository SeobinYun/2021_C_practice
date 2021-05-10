#include <stdio.h> //조건 연산자 예제
#pragma warning(disable:4996)
int main(void) {
	int a, b;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	(a > b) ? printf("%d > %d \n", a, b) : (a < b) ? printf("%d < %d\n", a, b) : printf("%d == %d \n", a, b);
	return 0;
}