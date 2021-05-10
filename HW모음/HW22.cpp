#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
int main(void) {
	int num = 0, q = 0;
	num = input();

	if (num / 5 != 0) {
		q = num / 5;
		for (int j = 0; j < q; j++) {
			for (int i = 0; i < 5; i++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else
		;
	num = num-(5 * q);

	for (int i = 0; i < num; i++) {
		printf("*");
	}
		
	return 0;
}

int input(void){
	int n=0;
	printf("# 정수값을 입력하세요 : ");
	scanf("%d", &n);
	return n;
}