#include <stdio.h>
#pragma warning(disable:4996)
double input(void);
void output(double);
int main(void) {
	double use;
	double total, a;
	use = input();
	a = 660 + (use * 88.5);
	total = a + (a * 0.09);
	output(total);
	return 0;
}
double input(void) {
	double use;
	printf("���� ��뷮�� �Է��ϼ���(kw) : ");
	scanf("%lf", &use);

	return use;
}

void output(double total) {
	printf("���� ������� %lf�� �Դϴ�.\n", total);
}