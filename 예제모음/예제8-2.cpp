// 배열을 이용한 합과 평균 출력
#include <stdio.h>
#pragma warning(disable:4996)
void array_input(int*, int);
int array_sum(int*, int);
int main(void) {
	int sum, ary[10];
	double ave;
	array_input(ary, 10);
	sum = array_sum(ary, 10);
	ave = (double)sum / 10;
	printf("Sum = %d Ave = %.2f\n", sum, ave);
	return 0;
}
void array_input(int* ip, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%d번방의 값 = ", i);
		scanf("%d", &ip[i]);
	}
	return;
}

int array_sum(int* ip, int count) {
	int i;
	int sum;
	for (i = 0, sum = 0; i < count; i++) {
		sum += ip[i];
	}
	return sum;
}