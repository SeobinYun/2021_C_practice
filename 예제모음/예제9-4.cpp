//auto 변수와 내부 static 변수의 차이
#include <stdio.h>
void sub();
int main(void) {
	for (int i = 0; i < 3; i++) {
		sub();
		printf("main i = %d\n", i);
	}
	return 0;
}
void sub() {
	static int i = 1;
	int k = 3;
	printf("sub i = %d\t k = %d\t", i++, k++);
}