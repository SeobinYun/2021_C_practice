#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
int calFee(int);
void output(int);
int main(void) {
	int a, b;
	a = input();
	b=calFee(a);
	output(b);

	return 0;
}

int input() {
	int s;
	printf("역수를 입력하시오 : ");
	scanf("%ld", &s);
	return s;
}

int calFee(int s) {
	int fee;
	if (s <= 5) {
		fee = 600;
	}
	else if (s <= 10) {
		fee = 800;
	}
	else if (s > 10) {
		s = s - 10;
		if (s % 2 == 0) {
			fee = 800 + 100 * (s / 2);
		}
		else if (s % 2 == 1) {
			fee = 800 + 100 * (s/2+1);
		}
		else
			;
	}
	else
		;
	return fee;
}

void output(int fee) {
	printf("요금 : %ld원\n", fee);
}