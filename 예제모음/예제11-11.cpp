//1차원 배열의 동적 메모리 할당
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int* myAlloc(int);
void dataInput(int*, int);
void dataOutput(int*, int);
void myDelete(int*);
int main(void) {
	int* ip;
	int col = 0;
	printf("column 수 입력 : ");
	scanf("%d", &col);
	ip = myAlloc(col);
	dataInput(ip, col);
	dataOutput(ip, col);
	myDelete(ip);
	return 0;
}
int* myAlloc(int col) {
	int* p;
	p = (int*)malloc(sizeof(int) * col);
	return p;
}
void dataInput(int* p, int col) {
	for (int i = 0; i < col; i++) {
		scanf("%d", p+i);
	}
}
void dataOutput(int* p, int col) {
	for (int i = 0; i < col; i++) {
		printf("%d\n", p[i]);
	}
}
void myDelete(int* p) {
	if (p != NULL) {
		free(p);
	}
}