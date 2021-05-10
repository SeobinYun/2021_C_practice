#include <stdio.h>
void printAge(int);
void printHeight(double);

int main(void) {
	char name[20] = "윤서빈";
	int age = 20;
	double height = 168.8;

	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

void printAge(int age) {
	printf("나이 : %d살\n", age);
}

void printHeight(double height) {
	printf("신장 : %.1fcm\n", height);
}