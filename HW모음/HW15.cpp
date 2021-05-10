#include <stdio.h>
#pragma warning(disable:4996)
int inputw(void);
double inputh(void);
void output(double);
double calBMI(int, double);
int main(void) {
	int w;
	double h, BMI;
	w = inputw();
	h = inputh();
	BMI = calBMI(w, h);
	output(BMI);
	return 0;
}

int inputw() {
	int w;
	printf("�����Ը� �Է��ϼ���(kg) : ");
	scanf("%d", &w);
	return w;
}

double inputh() {
	double h;
	printf("Ű�� �Է��ϼ���(m) : ");
	scanf("%lf", &h);
	return h;
}

double calBMI(int w, double h) {
	double BMI;
	BMI = (double)w / (h*h);
	return BMI;
}

void output(double BMI) {
	if (BMI < 18.5) {
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", BMI);
	}
	else if (BMI < 25.0) {
		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.\n", BMI);
	}
	else if (BMI < 30.0) {
		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", BMI);
	}
	else if (BMI < 40.0) {
		printf("����� BMI�� %.1lf���� ���Դϴ�.\n", BMI);
	}
	else if (BMI >= 40.0) {
		printf("����� BMI�� %.1lf���� �����Դϴ�.\n", BMI);
	}
	else {
		;
	}
}
