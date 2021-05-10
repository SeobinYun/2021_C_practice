#include <stdio.h> //실수형이 비교
#include <math.h> 
#include <float.h>
#pragma warning(disable:4996)
int main(void) {
	float a, b;
	printf("a=");
	scanf("%f", &a);

	printf("b=");
	scanf("%f", &b);

	printf("DBL_EPSILON = %.30lf\n", DBL_EPSILON);

	if (fabs(a - b) < DBL_EPSILON) {
		printf("두 수는 같은 수!!\n");
	}
	else {
		printf("두 수는 다른 수!!\n");
	}
	return 0;
}