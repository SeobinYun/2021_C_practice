#include <stdio.h>
#pragma warning(disable:4996)
double inputd(void);
double inputv(void);
void output(double, int, int, double);
int main(void) {
	double d, v, sec=0;
	int hour = 0, min = 0;
	double time; //저장할 공간
	d = inputd();
	v = inputv();
	
	time = d / v * 3600;
	hour = time / 3600;
	time = time - (hour * 3600);
	min = time / 60;
	sec = time - (min * 60);

	output(d, hour, min, sec);
	return 0;
}

double inputd() {
	double dis;
	printf("거리를 입력하시오(km단위) : ");
	scanf("%lf", &dis);
	return dis;
}

double inputv() {
	double v;
	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &v);
	return v;
}

void output(double km, int hour, int min, double sec) {
	printf("%.2lfkm = > %d시간 %d분 %.3lf 초 소요됨\n", km, hour, min, sec);
}