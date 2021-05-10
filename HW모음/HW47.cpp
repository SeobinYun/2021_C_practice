#include <stdio.h>
#pragma warning(disable:4996)
void myflush(void);
void inputUInt(double *);
double umax(double *);
double umin(double *);
void output(double, double);
int main(void) {
	double num[5] = { 0 };
	double max = 0, min = 0;
	inputUInt(num);
	max = umax(num);
	min = umin(num);
	output(max, min);
	return 0;
}
void myflush() {
	while (getchar() != '\n') {
		;
	}
}
void inputUInt(double *num) {
	int res = 0;
	for(int i=0; i<5; i++){
		printf("%d번 방 값 : ", i);
		res = scanf("%lf", &num[i]);
		if (res == 0) {
			i--;
		}
		else {
			myflush();
		}
	}
}
double umax(double* num) {
	double max = 0;
	max = num[0];
	for (int i = 0; i < 4; i++) {
		if (max < num[i + 1]) {
			max = num[i + 1];
		}
		else {
			continue;
		}
	}
	return max;
}
double umin(double* num) {
	double min = 0;
	min = num[0];
	for (int i = 0; i < 4; i++) {
		if (min > num[i + 1]) {
			min = num[i + 1];
		}
		else {
			continue;
		}
	}
	return min;
}
void output(double max, double min) {
	printf("\n가장 큰 값 : %.2f\n", max);
	printf("가장 작은 값 : %.2f\n", min);
}
