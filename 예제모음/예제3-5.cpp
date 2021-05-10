#include <stdio.h> //실수형 데이터의 출력
int main() {
	double d_num1 = 32.145e-1;
	double d_num2 = d_num1 + 10;
	printf("d_num1 = %lf(%le)\n", d_num1, d_num1);
	printf("d)num2= %lf(%le)\n", d_num2, d_num2);
	return 0;
}