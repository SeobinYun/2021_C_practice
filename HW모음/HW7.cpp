#include <stdio.h>
#pragma warning(disable:4996)
double inputd(void);
double inputv(void);
void output(double, int, int, double);
int main(void) {
	double d, v, sec=0;
	int hour = 0, min = 0;
	double time; //������ ����
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
	printf("�Ÿ��� �Է��Ͻÿ�(km����) : ");
	scanf("%lf", &dis);
	return dis;
}

double inputv() {
	double v;
	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &v);
	return v;
}

void output(double km, int hour, int min, double sec) {
	printf("%.2lfkm = > %d�ð� %d�� %.3lf �� �ҿ��\n", km, hour, min, sec);
}