#include <stdio.h>
#pragma warning(disable:4996)
int inputUInt(const char*);
void myflush(void);
void calc(int);
int main(void) {
	int day = 0;
	day = inputUInt("* ����� �ٹ��ϼ��� �Է��Ͻÿ� : ");
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
			//printf("%3d���� %3d��  ����: %d\n", n+1, i, sum);
			n++;
		}
	}
	printf("���ٹ��� : %d �� / �� ��ȭ �� : %d ��\n", day, sum);
}
