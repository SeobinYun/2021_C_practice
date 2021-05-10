#include <stdio.h> //정수를 입력받아 양수일 경우 출력하는 프로그램
#pragma warning(disable:4996)
int main() {
	int indata;
	scanf("%d", &indata);
	if (indata > 0) {
		printf("%d", indata);
	}
	return 0;
}