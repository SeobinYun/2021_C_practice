#include <stdio.h>
void printAge(int);
void printHeight(double);

int main(void) {
	char name[20] = "������";
	int age = 20;
	double height = 168.8;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age) {
	printf("���� : %d��\n", age);
}

void printHeight(double height) {
	printf("���� : %.1fcm\n", height);
}