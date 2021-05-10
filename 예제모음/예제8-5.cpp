// 이차원 숫자 배열 예제
#include <stdio.h>
#pragma warning(disable:4996)
void array_input(int(*)[4], int);
void array_output(int(*)[4], int);
int main(void) {
	int num_ary[3][4];
	int row, col;

	//행의 개수 구하기
	row = sizeof(num_ary) / sizeof(num_ary[0]);
	//열의 개수 구하기
	col = sizeof(num_ary) / sizeof(num_ary[0][0]);
	array_input(num_ary, row);
	array_output(num_ary, row);
	return 0;
}

void array_input(int(*p)[4], int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d행 %d열 방의 값 입력 : ", i, j);
			scanf("%d", &p[i][j]);
		}
	}
}

void array_output(int(*p)[4], int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		printf("%d행 : ", i);
		for (j = 0; j < 4; j++) {
			printf("%3d ", p[i][j]);
		}
		printf("\n");
	}
}