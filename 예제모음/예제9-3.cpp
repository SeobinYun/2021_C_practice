//외부변수(extern)와 자동변수(auto)의 차이
#include <stdio.h>
void sum();
int temp;
int main(void) {
	int a = 10;
	sum();
	printf("temp = %d\n", temp);
	printf("a = %d\n", a);
	return 0;
}
void sum() {
	temp += 100;
	//printf("a = %d\n", a); -> a 사용불가 왜냐면 범위를 허용하지 않아서
}