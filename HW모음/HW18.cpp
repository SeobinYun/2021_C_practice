#include <stdio.h>
#pragma warning(disable:4996)
int inputAge(void);
int inputCount(void);
void output(int, double);
int main(void) {
	int age = 0, count = 0, fee=0, total=0;
	double sale = 0;
	age = inputAge();
	count = inputCount();
	if (age <= 7 || age >= 56) {
		fee = 500;
	}
	else if (age <= 13) {
		fee = 700;
	}
	else if (age <= 19) {
		fee = 1000;
	}
	else if (age <= 55) {
		fee = 1500;
	}
	else
		;
	total = fee * count;
	if (count >= 5) {
		sale = (double)total * 0.1;
	}
	output(total, sale);
	return 0;
}
int inputAge() {
	int age;
	printf("���尴�� ���̸� �Է��Ͻÿ� : ");
	scanf("%ld", &age);
	return age;
}
int inputCount() {
	int count;
	printf("���尴�� ���� �Է��Ͻÿ� : ");
	scanf("%ld", &count);
	return count;
}
void output(int total, double sale) {
	printf("����� => %ld��\n", total);
	printf("���αݾ� => %.0lf��\n", sale);
	printf("�����ݾ� => %.0lf��\n", total - sale);
}