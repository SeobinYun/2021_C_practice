#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void sort(int*, int);
void output(int*, int, const char *);
int main(void) {
	int str[] = { 8,2,4,11,1,6};
	int n = 0;
	n = sizeof(str)/sizeof(str[0]);
	output(str, n, "# 소트 전 데이터 : ");
	sort(str, n);
	output(str, n, "# 소트 후 데이터 : ");
	
	return 0;
}
void sort(int* str, int n) {
	int temp;
	for(int j=0; j<n-1; j++){
		for (int i = 0; i < n - 1; i++) {
			if (str[i] > str[i + 1]) {
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
			}
			else { ; }
		}
	}
}
void output(int* str, int n, const char* want) {
	printf("%s", want);
	for (int i = 0; i < n; i++) {
		printf("%d ", str[i]);
	}
	printf("\n");
}