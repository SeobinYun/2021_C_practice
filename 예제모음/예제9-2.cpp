//parameter의 기억클래스는? auto 변수이다.
#include <stdio.h> 
void workover(int);
int reset(int);
int main(void) {
	int a = 5;
	reset(a / 2);
	printf("%d\n", a);
	reset(a /= 2);
	printf("%d\n", a);
	a = reset(a / 2);
	printf("%d\n", a);
	workover(a);
	printf("%d\n", a);
	return 0;
}
void workover(int a) {
	a = (((a * a) / (2 * a) + 4) * (a % a));
	printf("%d\n", a);
}
int reset(int a) {
	a = (a < 2) ? 5 : 0;
	return (a);
}