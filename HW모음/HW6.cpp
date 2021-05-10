#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
void output(double);
int main(void) {
	int f;
	double c;
	f= input();
	c = ((5.0/9.0) * (f - 32));
	output(c);
	return 0;
}
int input() {
	int deg;
	printf("화씨 온도를 입력하세요 : ");
	scanf("%d", &deg);
	return deg;
}

void output(double deg) {
	printf("섭씨 온도는 %.1lf 도입니다.\n", deg);
}