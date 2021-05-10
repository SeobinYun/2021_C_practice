#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void reset(int(*p)[5]);
void calc(int(*p)[5], int*);
void output(int*);
int main(void) {
	int ary[5][5] = { {0,0}, };
	int sum[3] = { 0 };
	reset(ary);
	calc(ary, sum);
	output(sum);
	return 0;
}
void reset(int(*ary)[5]) {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 25; i++) {
		ary[0][i] = rand() % 20 + 1;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d¹ø Çà : ", i);
		for (int j = 0; j < 5; j++) {
			printf("%4d", ary[i][j]);
		}
		printf("\n");
	}
}
void calc(int(*ary)[5], int* sum) {
	for (int i = 0; i < 5; i++) {
		sum[0] += ary[i][i];
	}
	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			sum[2] += ary[i][j];
		}
	}
	for (int i = 3; i >= 0; i--) {
		for (int j = 4; j > i; j--) {
			sum[1] += ary[i][j];
		}
	}
}
void output(int *sum) {
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("sum%d = %d\n", i + 1, sum[i]);
	}
}