#include <stdio.h> 
int main(void) {
	float x; //유효정밀도 : 10진수 기준 7~8자리
	int count = 1;
	for (x = 100000001.0f; x <= 10000000010.0f; x += 1.0f) { //무한루프임
		printf("%d. x = %.30f\n", count++, x);
	}
	return 0;
}
// iterator 반복자 변수는 반드시 정수형 사용