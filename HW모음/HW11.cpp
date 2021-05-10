#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int ch = 0;
	printf("ASCII code값을 입력하시오 : ");
	scanf("%d", &ch);
	printf("%d은 '%c'의 ASCII code 입니다.\n", ch, ch);
	return 0;
}