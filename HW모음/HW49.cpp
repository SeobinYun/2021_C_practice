#include <stdio.h>
void swap(int*, int n);
int main(void) {
	int str[] = { 1,2,3,4,5 };
	int n = 0;
	n = sizeof(str)/sizeof(str[0]);
	printf("처음 배열에 저장된 값 : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	swap(str, n);
	printf("바뀐 배열에 저장된 값 : ");
	for (int i = 0; i < n; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
	return 0;
}
void swap(int* str, int n) {
	int temp = 0;
	//for (int j = 0; j < (n / 2); j++) {
	for (int i = 0; i < (n / 2); i++) {
		temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
//}
}