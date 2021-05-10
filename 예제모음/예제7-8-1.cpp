// 2의 n승을 구하는 프로그램
#include <stdio.h>
int iteratorPowerOf2(int power);
int recursivePowerOf2(int power);
int main(void) {
	int power = 10;
	printf("2의 %d승의 값 = %d\n", power, iteratorPowerOf2(power));
	printf("2의 %d승의 값 = %d\n", power, recursivePowerOf2(power));
	getchar();
	return 0;
}
//비재귀 함수
int iteratorPowerOf2(int power) {
	int sum = 1;
	for (int i = 0; i < power; i++) {
		sum *= 2;
	}
	return sum;
}
//재귀 함수
int recursivePowerOf2(int power) {
	if (power == 0) {
		return 1;
	}
	else {
		return recursivePowerOf2(power - 1) * 2;
	}
}