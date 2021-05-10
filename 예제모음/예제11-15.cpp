// 함수 포인터 & void 포인터 예제
#pragma warning(disable:4996);
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
void outputArray(void*, size_t, size_t, void (*printData)(void*));
void printInt(void*);
void printDouble(void*);
int main(void) {
	int iAry[5] = { 10,20,30,40,50 };
	double dAry[3] = { 3.5, 7.5, 8.5 };
	printf("\n[iAry 배열 출력 ]\n");
	outputArray(iAry, sizeof(iAry) / sizeof(iAry[0]), sizeof(int), printInt);
	printf("\n[dAry 배열 출력 ]\n");
	outputArray(dAry, sizeof(dAry) / sizeof(dAry[0]), sizeof(double), printDouble);

	return 0;
}
void outputArray(void* start, size_t count, size_t dataSize, void (*printData)(void*)) {
	for (int i = 0; i < count; i++) {
		printf("%d. ", i + 1);
		printData((char*)start + i * dataSize);
	}
}

void printInt(void* p) {
	printf("%5d\n", *(int*)p);
}
void printDouble(void* p) {
	printf("%7.2lf\n", *(double*)p);
}