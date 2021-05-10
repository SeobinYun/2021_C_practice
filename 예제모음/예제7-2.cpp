#include <stdio.h> //전달인자와 리턴값이 있는 함수 예제
#pragma warning(disable:4996)
int abs(int);
int main(void) {
	int num;
	printf("하나의 수를 입력하세요 : ");
	scanf("%d", &num);
	printf("입력된 수의 절대값은 : %d 입니다.\n", abs(num));
	return 0;
}

int abs(int x) {
	if (x > 0) {
		return (x);
	}
	else {
		return (-x);
	}
}