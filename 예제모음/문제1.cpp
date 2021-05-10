#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int n = 0;
	int res;
	while (1) {
		printf("양수 입력 : ");
		res=scanf("%d", &n); //res : 정수 입력시 1 / 문자입력시 0 / EOF입력시 -1
		if (res!=1) { //정수 입력이 안되었을 때
			break;
		}
		if(n>=0){
			for (int i = 0; i < n; i++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			printf("음수가 입력되었습니다.\n");
		}
	}
	return 0;
}