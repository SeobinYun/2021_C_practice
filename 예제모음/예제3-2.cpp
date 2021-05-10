#include <stdio.h> //최대값을 넘어가는 숫자의 표현
int main() {
	short x = 32767;
	short y = x + 1;
	printf("x = %hd\t y = %hd\n", x, y);
	return 0;
}