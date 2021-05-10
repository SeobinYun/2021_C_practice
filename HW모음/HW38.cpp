#include <stdio.h>
#pragma warning(disable:4996)
int inputUInt(const char*);
void myflush(void);
void calc(int);
int main(void) {
	int day = 0;
	day = inputUInt("* 기사의 근무일수를 입력하시오 : ");
	calc(day);
	return 0;
}
void myflush() {
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
void calc(int day) {
	int cnt = 1, sum = 0;
	int n = 0;
	for (int i = 1; i <= day; i++) {
		for (int j = 0; j < i; j++) {
			if (n == day) {
				break;
			}
			sum += i;
			//printf("%3d일차 %3d개  총합: %d\n", n+1, i, sum);
			n++;
		}
	}
	printf("　근무일 : %d 일 / 총 금화 수 : %d 개\n", day, sum);
}
