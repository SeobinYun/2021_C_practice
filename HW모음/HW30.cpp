#include <stdio.h> // 2진수 변환 프로그램
#pragma warning(disable:4996)
int main(void) {
	int num = 0, res = 0, final = 0;
	while (res != 1) {
		printf("* 10진수 정수를 입력하시오 : ");
		res = scanf("%d", &num);
	}

	printf("%d(10) = ", num);

	for (int i = 31; i >= 0; i--) {
		res = 1 << i;
		if (num & res) {
			printf("1");
		}
		else {
			printf("0");
		}
	}

	printf("(2)\n");
	return 0;
}

