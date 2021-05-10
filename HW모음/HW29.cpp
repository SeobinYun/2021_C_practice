#include <stdio.h>
#pragma warning(disable:4996)
int inputstart(void);
int inputend(void);
int inputnum(void);
int transNumber(int);

int main(void) {
	int st = 0, en = 0, nu = 0;
	int cnt = 0;
	int res = 0; //transNumber�� ���ϰ��� ����
	st = inputstart();
	en = inputend();
	nu = inputnum();
	printf("�������� %d�� ���� ���\n", nu);
	for (int a = st; a <= en; a++) { //�����
		if (transNumber(a) == nu) {
			cnt++;
			printf("%d\n", a);
		}
		else
			;
	}
	printf("�� ���� : %d��\n", cnt);
	return 0;
}
int inputstart(void) {
	int start = 0;
	while (1) {
		printf("���� ��(P1) : ");
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
		printf("�� ��(P2) : ");
		scanf("%d", &end);
		if (end <= 10000) {
			break;
		}
	}
	return end;
}
int inputnum(void) {
	int num = 0;
	while (1) {
		printf("������(N) : ");
		scanf("%d", &num);
		if (num >= 1 && num <= 10) {
			break;
		}
	}
	return num;
}
int transNumber(int start) {
	int count = 0;
	int man = 0, thousands = 0, hundreds = 0, tens = 0, units = 0;
	while (start >= 10) {
		man = start / 10000;
		thousands = (start % 10000) / 1000;
		hundreds = ((start % 10000) % 1000) / 100;
		tens = (((start % 10000) % 1000) % 100) / 10;
		units = (((start % 10000) % 1000) % 100) % 10;
		if (start < 10) {
			break;
		}
		else if (start <= 99) {
			start = tens * units;
			count++;
		}
		else if (start <= 999) {
			start = hundreds * tens * units;
			count++;
		}
		else if (start <= 9999) {
			start = thousands * hundreds * tens * units;
			count++;
		}
		else if (start == 10000) {
			start = man * thousands * hundreds * tens * units;
			count++;
		}
	}
	return count;
}