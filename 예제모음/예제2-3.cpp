#include <stdio.h> //사과무게를 입력받아 200g 이하는 300원, 400g이하면 500원, 400g초과면 700원으로 출력하는 프로그램
#pragma warning(disable:4996)
int main() {
	int weight, price;
	scanf("%d", &weight);
	if (weight <= 200) {
		price = 300;
	}
	else if (weight <= 400) {
		price = 500;
	}
	else {
		price = 700;
	}
	printf("%d", price);
	return 0;
}