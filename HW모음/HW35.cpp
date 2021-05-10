#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int a = 0, sum = 0, res = 0;
	for (int i = 1; i <=5 ; ) {
		printf("0보다 큰수를 입력하시요(%d 번째) : ", i);
		scanf("%d", &a);
		if (a < 1) {
			continue;
		}
		else {
			sum += a;
			i++;
		}
	}
	printf("입력된 값의 총 합 : %d", sum);
	return 0;
}