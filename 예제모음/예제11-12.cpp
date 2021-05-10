//2차원 배열의 동적 메모리 할당
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int** myAlloc(int, int);
void dataInput(int**, int, int);
void dataOutput(int**, int, int);
void myDelete(int**, int);
int main(void) {
	int** ip;
	int col = 0, row = 0;

	printf("row 수 입력 : ");
	scanf("%d", &row);
	printf("column 수 입력 : ");
	scanf("%d", &col);

	ip = myAlloc(row, col);
	dataInput(ip, row, col);
	dataOutput(ip, row, col);
	myDelete(ip, row);
}
int** myAlloc(int row, int col) {
	int** p;
	p = (int**)malloc(sizeof(int*) * row);
	if (p == NULL) {
		return p;
	}
	for (int i = 0; i < row; i++) {
		p[i] = (int*)malloc(sizeof(int) * col);
		if (p[i] == NULL) {
			myDelete(p, i);
			return NULL;
		}
	}
	return p;
}
void dataInput(int** p, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &p[i][j]);
		}
	}
}
void dataOutput(int** p, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t", p[i][j]);
		}
		printf("\n");
	}
}
void myDelete(int** p, int row) {
	if (p == NULL) {
		return;
	}
	for (int i = 0; i < row; i++) {
		free(p[i]);
	}
	free(p);
}