#include <stdio.h> //�Ǽ����� ��
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
		printf("�� ���� ���� ��!!\n");
	}
	else {
		printf("�� ���� �ٸ� ��!!\n");
	}
	return 0;
}