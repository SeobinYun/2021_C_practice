#include <stdio.h>
int main(void) {
	double total = 365.2422;
	int day = 0, hour = 0, min = 0;
	double sec=0, a1=0, a2=0;

	day = total / 1.00;
	a1 = total - day;
	a2 = a1 * 86400;
	hour = a2 / 3600;
	a1 = a2-(hour*3600);
	min = a1 / 60;
	sec = a1 -(min*60);



	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초입니다.\n", total, day, hour, min, sec);
	return 0;
}