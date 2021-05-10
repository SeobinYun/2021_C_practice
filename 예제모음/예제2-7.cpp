#include <stdio.h> //10에서 1까지 1씩 감소하면서 출력 - 변수값을 이용한 종료조건
int main(void) {
	int num = 10;
	while (num) {
		printf("%5d", num);
		num--;
	}
	return 0;
}