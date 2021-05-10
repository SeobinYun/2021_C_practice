#include <stdio.h> //unsigned형 기억공간에 음수값을 저장한다? 저장되어 있는 값과 상관없이 출력되는 값은 형식변환 문자열의 해석에 따른다. 
int main(void) {
	short x = -32767;
	unsigned short y = x;
	printf("x = %hd\t y = %hu\n", x, y);
	printf("x = %hu\t y = %hd\n", x, y);
	return 0;
}