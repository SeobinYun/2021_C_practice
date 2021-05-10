#include <stdio.h>
int main(void) {
	int a = 3;
	int res;
	res = a << 34;
	printf("%d\n", res);
	return 0;
}

//기계어가 res = a << (34 % (sizeof(int) * 8));
//res = a << 2;로 처리