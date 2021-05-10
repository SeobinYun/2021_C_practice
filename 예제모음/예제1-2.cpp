#include <stdio.h>
void printNumber(int);
int main(void) {
	int num;
	num = 1;
	printNumber(num);
	num = 3;
	printNumber(num);
	return 0;
}

void printNumber(int n) {
	printf("정수값은 %d입니다.\n", n);
}