#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int money = 0, res = 1;
	while (res == 1) {
		printf("현재 당신의 소유 금액 입력 : ");
		res = scanf("%d", &money);
		if (res == 1) {
			for (int a = 1; a <= money / 500; a++) {
				for (int b = 1; b <= money / 700; b++) {
					for (int c = 1; c <= money / 400; c++) {
						if ((a * 500) + (b * 700) + (c * 400) == money) {
							printf("크림빵(%d 개), 새우깡(%d 개), 콜라(%d 병)\n", a, b, c);
						}
					}
				}
			}
			printf("어떻게 구입하시겠습니까?\n\n");
		}
	}
	return 0;
}