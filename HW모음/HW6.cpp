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
	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%d", &deg);
	return deg;
}

void output(double deg) {
	printf("���� �µ��� %.1lf ���Դϴ�.\n", deg);
}