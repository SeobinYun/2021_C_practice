//매크로 상수와 매크로 함수
#include <stdio.h>
#define PI 3.14
#define MAX(x,y) (x>y)?x:y
int main(void) {
	int a = 123, b = 456;
	printf("PI = %lf\n", PI);
	printf("The Max is %d\n", MAX(a, b));
	return 0;
}