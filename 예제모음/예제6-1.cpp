#include <stdio.h> //증가 감소 연산자 예제
int main(void) {
	int a = 0, b = 0;
	a++;
	b++;
	printf(" a = %d b = %d\n", a, b); //1 1
	b = a++;
	printf(" a = %d b = %d\n", a, b); //2 1
	b = ++a;
	printf(" a = %d b = %d\n", a, b); // 3 3
	printf(" a = %d b = %d\n", a++, ++b); // 3 4
	printf(" a = %d b = %d\n", a, b); // 4 4
	return 0;
}