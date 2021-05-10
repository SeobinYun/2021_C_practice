#include <stdio.h>
int main(void) {
	int price = 278970;
	int res = 0;

	res = price % 50000;
	price = price / 50000;
	printf("50000원권 => %d개\n", price);

	price = res / 10000;
	printf("10000원권 => %d개\n", price);
	res = res % 10000;

	price = res / 5000;
	printf("5000원권 => %d개\n", price);
	res = res % 5000;

	price = res / 1000;
	printf("1000원권 => %d개\n", price);
	res = res % 1000;

	price = res / 500;
	printf("500원권 => %d개\n", price);
	res = res % 500;

	price = res / 100;
	printf("100원권 => %d개\n", price);
	res = res % 100;

	price = res / 50;
	printf("50원권 => %d개\n", price);
	res = res % 50;

	price = res / 10;
	printf("10원권 => %d개\n", price);

	return 0;
}