// 초기화된 배열의 합 출력
#include <stdio.h>
int main(void) {
	int ary[5] = { 1,3,5,7,9 };
	int i, sum;
	for (i = sum = 0; i < 5; i++) {
		printf("ary[%d] = %d\n", i, ary[i]);
		sum += ary[i];
	}
	printf("sum = %d \n", sum);
	return 0;
}