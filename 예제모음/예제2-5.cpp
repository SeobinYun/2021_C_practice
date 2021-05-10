#include <stdio.h> //임의의 수를 입력받아 계속적인 합 출력하기 - 상황에 따른 반복
#pragma warning(disable:4996)
int main(void) {
	int k, s = 0;
	/*printf("정수를 입력하세요. 0(zero)을 입력하면 종료됩니다 : "); //숫자 0 입력시 종료
	scnaf("%d", &k);
	while (k != 0) {
		printf("지금까지 합은 : %d 입니다. \n", s += k);
		printf("수를 입력하세요 0(zero)을 입력하면 종료됩니다 : ");
		scanf("%d", &k);
	}*/
	printf("정수를 입력하세요. 문자를 입력하면 종료됩니다 : ");
	while (scanf("%d", &k) == 1) { //문자입력시 종료
		printf("지금까지 합은 : %d 입니다. \n", s += k);
		printf("정수를 입력하세요. 문자를 입력하면 종료됩니다 : ");
	}
	return 0;
}