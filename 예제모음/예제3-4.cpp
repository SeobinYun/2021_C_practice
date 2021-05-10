#include <stdio.h> //signed와 unsigned형으로 구분하는 것의 의미
int main(void) {
	short x;
	unsigned short y;
	int res1, res2;
	x = y = -1;
	res1 = x * 3;
	res2 = y * 3;
	printf("res1 = %d\n", res1);
	printf("res2 = %d\n", res2);
	return 0;
}

//위의 예제에서는 x, y 변수가 각각 선언된 형태대로 x는 signed 형의 데이터로 인식되어 계산되며,
//y는 unsigned형의 데이터로 인식되어 계산된다.