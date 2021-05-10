#include <stdio.h>
#pragma warning(disable:4996)
void myflush(void);
int inputUInt(const char *);
double inputDouble(const char*);
void ipow(int, int);
void fpow(double, int);
int main(void) {
	int u = 0, n = 0;
	double f = 0;
	u = inputUInt("* ���� ���� ���� �Է� �Ͻÿ� : ");
	n = inputUInt("* ���� ���� �Է� �Ͻÿ� : ");
	ipow(u, n);
	f = inputDouble("* ���� �Ǽ� ���� �Է� �Ͻÿ� : ");
	n = inputUInt("* ���� ���� �Է� �Ͻÿ� : ");
	fpow(f, n);
	return 0;
}
void myflush(void) {
	while (getchar() != '\n') {
		;
	}
}
int inputUInt(const char* msg) {
	int num = 0;
	int res = 0;
	printf(msg);
	while (1) {
		res = scanf("%d", &num);
		if (getchar() == '\n') {
			break;
		}
		else if (res == 0) {
			return 0;
			break;
		}
		else {
			myflush();
		}
	}
	return num;
}
double inputDouble(const char* msg) {
	double num = 0;
	int res = 0;
	printf(msg);
	while (1) {
		res = scanf("%lf", &num);
		if (getchar() == '\n') {
			break;
		}
		else if (res == 0) {
			return 0;
			break;
		}
		else {
			myflush();
		}
	}
	return num;
}
void ipow(int u, int n) {
	int sum = 1;
	for (int i = 0; i < n; i++) {
		sum *= u;
	}
	printf("%d�� %d���� %d�Դϴ�.\n\n", u, n, sum);
}
void fpow(double f, int n) {
	double sum = 1;
	for (int i = 0; i < n; i++) {
		sum *= f;
	}
	printf("%.2lf�� %d���� %.3lf�Դϴ�.\n\n", f, n, sum);
}