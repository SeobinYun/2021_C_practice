//1차원 포인터 예제
#include <stdio.h>
int main(void) {
	int* ptr, num = 10;
	ptr = &num;
	*ptr = *ptr + 4;
	printf("num = %d\t *ptr = %d\n", num, *ptr);
	return 0;
}