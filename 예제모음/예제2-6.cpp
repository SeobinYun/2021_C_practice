#include <stdio.h> //구구단 2단을 출력 - 정해진 횟수의 반복
#pragma warning(disable:4996)
int main(void) {
	int i = 1;
	while (i < 10) {
		printf("2 * %d = %d\n", i, 2 * i);
		i++;
	}
	return 0;
}