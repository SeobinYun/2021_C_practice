#include <stdio.h> //함수의 선언, 호출, 정의의 예
#pragma warning(disable:4996)
double sumPrn(int, double);
int main(void) {
	int a = 10;
	double b = 5.4;
	double res;
	res = sumPrn(a, b);
	printf(" res = %lf\n", res);
	return 0;
}
double sumPrn(int x, double y) {
	double num;
	printf(" int : %d\t double : %lf\n", x, y);
	num = x + y;
	return num;
}
