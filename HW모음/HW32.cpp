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
	u = inputUInt("* 양의 정수 밑을 입력 하시오 : ");
	n = inputUInt("* 양의 승을 입력 하시오 : ");
	ipow(u, n);
	f = inputDouble("* 양의 실수 밑을 입력 하시오 : ");
	n = inputUInt("* 양의 승을 입력 하시오 : ");
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
	printf("%d의 %d승은 %d입니다.\n\n", u, n, sum);
}
void fpow(double f, int n) {
	double sum = 1;
	for (int i = 0; i < n; i++) {
		sum *= f;
	}
	printf("%.2lf의 %d승은 %.3lf입니다.\n\n", f, n, sum);
}