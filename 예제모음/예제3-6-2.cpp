#include <stdio.h> //순환소수 오차 예제
int main(void) {
	float x;
	int count = 1;
	for (x = 0.1f; x <= 1.0f; x += 0.1f) { //의도는 10회 반복이지만 실제로는 9회 반복
		printf("%d. x = %.10f\n", count++, x);
	}
	return 0;
}
// iterator 반복자 변수는 반드시 정수형 사용
// 0.100000xxx xxx는 보태진 값임