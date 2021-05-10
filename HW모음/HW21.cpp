#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	/*double a[6] = { 0 };
	double sum=0;
	for (int i = 1; i < 6; i++) {
		printf("- %d 번 학생의 키는? ", i);
		scanf("%lf", &a[i]);
	}
	
	for (int i = 1; i < 6; i++) {
		sum += a[i];
	}

	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", sum / 5.0);*/

	double height=0, sum=0;
	for (int i = 1; i < 6; i++){
		printf("- %d 번 학생의 키는? ", i);
		scanf("%lf", &height);
		sum += height;
	}
	printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n", sum / 5.0);
	return 0;
}