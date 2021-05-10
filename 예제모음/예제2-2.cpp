#include <stdio.h> //사과무게를 입력받아 300g이상이면 1000원, 300g미만이면 500원을 출력하는 프로그램
#pragma warning(disable:4996)
int main(void) {
	int weight;
	scanf("%d", &weight);
	if (weight >= 300) {
		printf("사과가격 1000원");
	}
	else {
		printf("사과가격 500원");
	}
	return 0;
}