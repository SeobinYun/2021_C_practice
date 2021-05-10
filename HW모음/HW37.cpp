#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int num = 1;
	int sum = 0;
	int num1 = 1, num2 = 1;
	int temp = 0;
	while (1) {
		printf("피보나치 수열의 항수를 입력하시오 : ");
		scanf("%d", &num);
		if (num > 0) {
			break;
		}
		else {
			;
		}
	}
	while (num > 0) {
		printf("%d ", num1);
		for (int i = 0; i < num - 1; i++) {
			printf("+ %d ", num2);
			sum += num1;
			temp = num1;
			num1 = num2;
			num2 += temp;
		}
		break;
	}
	if (num > 0){
		sum += num1;
			printf("= %d\n", sum);
	}
	else {
		;
	}
	return 0;
}