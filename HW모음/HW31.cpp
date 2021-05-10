#include <stdio.h>
#pragma warning(disable:4996)
void myflush(void);
int inputInt(const char*);
char menu(void);
int deposit(int);
int withdraw(int);
void printsum(int);
int main(void) {
	char me = 0;
	int sum = 0;
	printsum(sum);
	while (1) {
		me = menu();
		if (me == 'x') {
			printf("* 잘못 입력하셨습니다.\n\n");
			continue;
		}
		else if (me == 'i' || me == 'I') {
			sum = deposit(sum);
			continue;
		}
		else if (me == 'o' || me == 'O') {
			sum = withdraw(sum);
			continue;
		}
		else if (me == 'q') {
			break;
		}
	}
	return 0;
}
void myflush() {
	while (getchar() != '\n') {
		;
	}
}
int inputInt(const char* msg) {
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
void printsum(int sum) {
	printf("* 현재 잔액은 %d원 입니다.\n\n", sum);
}
char menu() {
	char opt = 0;
	printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료): ");
	scanf("%c", &opt);
	myflush();
	if (!(opt == 'i' || opt == 'I' || opt == 'o' || opt == 'O' || opt == 'q' || opt == 'Q')) {
		return 'x';
	}
	return opt;
}
int deposit(int sum) {
	int m = 0;
	while (1) {
		m = inputInt("# 입금액을 입력하세요 : ");
		if (m <= 0 ) {
			while (1) {
				m = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
				if (m > 0) {
					sum += m;
					break;
				}
				else {
					continue;
				}
			}
			break;
		}
		else {
			sum += m;
			break;
		}
	}
	printsum(sum);
	return sum;
}
int withdraw(int sum) {
	int m = 0;
	while (1) {
		m = inputInt("# 출금액을 입력하세요 : ");
		if (m < 0) {
			while (1) {
				m = inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
				if (m > 0) {
					sum -= m;
					break;
				}
				else {
					continue;
				}
			}
			break;
		}
		if (sum > m) {
			sum -= m;
			break;
		}
		else if (sum < m) {
			printf("* 잔액이 부족합니다.\n");
			break;
		}
	}
	printsum(sum);
	return sum;
}