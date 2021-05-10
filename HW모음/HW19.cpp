#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
int yearcheck(int);
void output(int, int);

int main(void) {
	int year, check;

	year = input();
	check = yearcheck(year);
	output(year, check);

	return 0;
}

int input() {
	int year;
	printf("년도를 입력하시오 : ");
	scanf("%ld", &year);
	return year;
}

int yearcheck(int year) { // 윤년이면 1, 평년이면 0
	if (year % 4 == 0) {
		if (year % 100==0) {
			if (year % 400 == 0) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 1;
		}
	}
	else {
		return 0;
	}
}

void output(int year, int a) {
	if (a == 0) {
		printf("%ld년은 평년(Common year)입니다.\n", year);
	}
	else if (a == 1) {
		printf("%ld년은 윤년(Leap year)입니다.\n", year);
	}
	else
		;
}