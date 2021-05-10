#include <stdio.h>
#pragma warning(disable:4996)
int inputstart(void);
int inputend(void);
int inputnum(void);
int transNumber(int, int, int);

int main(void) {
	int st = 0, en = 0, nu = 0;
	int cnt = 0;
	st = inputstart();
	en = inputend();
	nu = inputnum();
	printf("고집수가 %d인 숫자 출력\n", nu);
	cnt = transNumber(st, en, nu);
	printf("총 개수 : %d개\n", cnt);
	return 0;
}
int inputstart(void) {
	int start = 0;
	while (1) {
		printf("시작 값(P1) : ");
		scanf("%d", &start);
		if (start >= 100) {
			break;
		}

	}
	return start;
}
int inputend(void) {
	int end = 0;
	while (1) {
		printf("끝 값(P2) : ");
		scanf("%d", &end);
		if (end <= 10000 ) {
			break;
		}
	}
	return end;
}
int inputnum(void) {
	int num=0;
	while (1) {
		printf("고집수(N) : ");
		scanf("%d", &num);
		if (num >= 1 && num <= 10) {
			break;
		}
	}
	return num;
}
int transNumber(int start, int end, int num) {
	int count = 0, result = 0;
	int man = 0, thousands = 0, hundreds = 0, tens = 0, units = 0;
	int temp = 0;
	for (int a = start; a <= end; a++) {
		temp = a;
		while (a<=9) {
			man = a / 10000;
			thousands = (a % 10000) / 1000;
			hundreds = ((a % 10000) % 1000) / 100;
			tens = (((a % 10000) % 1000) % 100) / 10;
			units = (((a % 10000) % 1000) % 100) % 10;
			/*printf("%d\n", man);
			printf("%d\n", thousands);
			printf("%d\n", hundreds);
			printf("%d\n", tens);
			printf("%d\n", units);
			break;*/
			if (a == 10000) { //쉬이ㅣ발...........이거때문에 실행이 좆같이된 거엿음 break문을 맨 위로 ㅎ도록......
				a = man * thousands * hundreds * tens * units;
				count++;
				continue;
			}
			else if (a <= 9999 && a >= 1000) {
				a = thousands * hundreds * tens * units;
				count++;
				continue;
			}
			else if (a <= 999 && a >= 100) {
				a = hundreds * tens * units;
				count++;
				continue;
			}
			else if (a <= 99 && a >= 100) {
				a = tens * units;
				count++;
				continue;
			}
			else {
				break;
			}
			/*if (man == 0) {
				man = 1;
			}
			else if (thousands == 0) {
				thousands = 1;
			}
			else if (hundreds == 0) {
				hundreds = 1;
			}
			else if (tens == 0) {
				tens = 1;
			}
			else if (units == 0) {
				units = 1;
			}*/
		}
		if (count == num) {
			result++;
			printf("%d\n", temp);
		}
		else {
			;
		}
		count = 0;
		a = temp;
	}
	return result;
}