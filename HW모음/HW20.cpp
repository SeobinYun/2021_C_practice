#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
double caltotal(int);
double caltax(int, double);
void output(double, double);
int main(void) {
	int t;
	double total = 0, tax=0;
	
	t = input();
	total = caltotal(t);
	tax = caltax(t,total);
	output(total, tax);

	return 0;
}

int input(void) {
	int time;
	printf("* 1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
	scanf("%d", &time);
	return time;
}
double caltotal(int t) {
	double total=0;
	if (t >= 40) {
		total = (40 * 3000.0) + (((double)t - 40) * 3000.0 * 1.5);
	}
	else {
		total = t * 3000.0;
	}
	return total;
}

double caltax(int t, double total) {
	double tax = 0;
	if (t >= 40) {
		total = (40 * 3000.0) + (((double)t - 40) * 3000.0 * 1.5);
		if (total > 100000) {
			tax = (100000 * 0.15) + ((total - 100000) * 0.25);
		}
		else {
			tax = total * 0.15;
		}
	}
	else {
		total = t * 3000.0;
		if (total > 100000) {
			tax = (100000 * 0.15) + ((total - 100000) * 0.25);
		}
		else {
			tax = total * 0.15;
		}
	}
	return tax;
}

void output(double a, double b) {
	printf("# �Ѽ��� : %.0lf��\n", a);
	printf("# ��  �� : % .0lf��\n", b);
	printf("# �Ǽ��� : %.0lf��\n", a-b);
}