#include <stdio.h> //10진수 3개를 입력 받아 그 합 출력하기
#pragma warning(disable:4996)
int main(void) {
	int a = 0, b = 0, c = 0, result, total;
	printf("정수 세개를 입력하시오 : ");
	result = scanf("%d %d %d", &a, &b, &c);
	if (result == 3) {
		total = a + b + c;
		printf("세 값의 합은 %d입니다.\n", total);
	}
	else {
		printf("입력데이터 오류입니다.\n");
	}
	printf("scanf()함수의 리턴값 : %d\n", result);
	return 0;
}