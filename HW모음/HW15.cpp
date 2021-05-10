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
	printf("몸무게를 입력하세요(kg) : ");
	scanf("%d", &w);
	return w;
}

double inputh() {
	double h;
	printf("키를 입력하세요(m) : ");
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
		printf("당신의 BMI는 %.1lf으로 저체중입니다.\n", BMI);
	}
	else if (BMI < 25.0) {
		printf("당신의 BMI는 %.1lf으로 정상체중입니다.\n", BMI);
	}
	else if (BMI < 30.0) {
		printf("당신의 BMI는 %.1lf으로 과체중입니다.\n", BMI);
	}
	else if (BMI < 40.0) {
		printf("당신의 BMI는 %.1lf으로 비만입니다.\n", BMI);
	}
	else if (BMI >= 40.0) {
		printf("당신의 BMI는 %.1lf으로 고도비만입니다.\n", BMI);
	}
	else {
		;
	}
}
