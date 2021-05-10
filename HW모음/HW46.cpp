#include <stdio.h>
#pragma warning(disable:4996)
int input(int*, int*, int*);
int yearcheck(int);
int errorcheck(int*, int*, int*, int);
int calcdays(int, int, int, int);
void output(int, int, int, int);
int main(void) {
	int year = 0, month = 0, day = 0;
	int res = 0;
	int tf = 0; //�������� �������
	int sum = 0; //�� ��¥
	int* a, * b, * c;
	a = &year;
	b = &month;
	c = &day;
	while (1) {
		res = input(a, b, c);
		if (res != 3) { //�����Է½� ����
			break;
		}
		else { ; }
		//printf("res: %d\t %d %d %d\n", res, year, month, day);
		tf = yearcheck(year);
		sum = calcdays(year, month, day, tf);
		//printf("%d\n", sum);
		//printf("%d\n", sum % 7);
		output(year, month, day, sum);
	}
	return 0;
}
int input(int* a, int* b, int* c) {
	int res = 0;
	int ck = 0; //��¥ ���� üũ
	int tf = 0; //����� üũ
	int y = 0;
	while (1) {
		printf("* �� �� ���� �Է��Ͻÿ� : ");
		res = scanf("%d %d %d", a, b, c);
		if (res != 3) {
			return -1;
		}
		else {
			y = *a;
			tf = yearcheck(y);
			//printf("%d %d %d\n", a, b, c);
			ck = errorcheck(a, b, c, tf);
			if (ck != 0) { //-1 ���� ��
				continue;
			}
			else {
				break;
			}
		}
	}
	return res;
}
int yearcheck(int a) { // �����̸� 1, ����̸� 0
	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
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
int errorcheck(int* a, int* b, int* c, int tf) {
	if (*a >= 1900) {
		if (*b >= 1 && *b <= 12) {
			if (*b == 2) {
				switch (tf) {
				case 0: //���
					if (*c >= 1 && *c <= 28) {
						return 0;
					}
					else {
						return -1;
					}
					break;
				case 1: //����
					if (*c >= 1 && *c <= 29) {
						return 0;
					}
					else {
						return -1;
					}
					break;
				default:;
				}
			}
			else if (*b == 1 || *b == 3 || *b == 5 || *b == 7 || *b == 8 || *b == 10 || *b == 12) {
				if (*c >= 1 && *c <= 31) {
					return 0;
				}
				else {
					return -1;
				}
			}
			else if (*b == 4 || *b == 6 || *b == 9 || *b == 11) {
				if (*c >= 1 && *c <= 30) {
					return 0;
				}
				else {
					return -1;
				}
			}
			else { ; }
		}
		else {
			return -1;
		}
	}
	else {
		return -1;
	}
	return -1;
}
int calcdays(int year, int month, int day, int tf) {
	int total = 0;
	int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int i = 1900; i < year; i++) {
		if (yearcheck(i) == 0) { //����϶�
			total += 365;
		}
		else {  //�����϶�
			total += 366;
		}
	}
	printf("%d\n", total);
	for (int i = 1; i < month; i++) {
		if (yearcheck(year) == 0) { //����϶�
			if (i == 2) {
				total += m[1];
			}
			else {
				total += m[i - 1];
			}
		}
		else if (yearcheck(year) != 0) { //�����϶�
			if (i == 2) {
				m[1] = 29;
				total += m[1];
			}
			else {
				total += m[i - 1];
			}
		}
		else {
			;
			//total += m[0][i - 1];
		}
	}
	printf("%d\n", total);
	total += day;
	//if (yearcheck(year) == 1 && month >= 3) {
	if (yearcheck(year)!=0 && month>=3){
		printf("%d\n", yearcheck(year));
		total++;
	}
	printf("%d\n", total);
	return total;
}
void output(int a, int b, int c, int sum) {
	int when = 0;
	when = sum % 7;
	printf("��%d�� %d�� %d���� ", a, b, c);
	switch (when) {
	case 0:
		printf("�Ͽ����Դϴ�.\n");
		break;
	case 1:
		printf("�������Դϴ�.\n");
		break;
	case 2:
		printf("ȭ�����Դϴ�.\n");
		break;
	case 3:
		printf("�������Դϴ�.\n");
		break;
	case 4:
		printf("������Դϴ�.\n");
		break;
	case 5:
		printf("�ݿ����Դϴ�.\n");
		break;
	case 6:
		printf("������Դϴ�.\n");
		break;
	default:;
	}
	printf("\n");
}
