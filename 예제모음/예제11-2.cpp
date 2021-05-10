//포인터 변수의 크기 확인하기
#include <stdio.h>
int main(void) {
	char* cp, ch = 'a';
	int* ip, num = 5;
	double* dp, dnum = 3.14;
	cp = &ch;
	ip = &num;
	dp = &dnum;
	printf("cp : %d, *cp : %dByte\n", sizeof(cp), sizeof(*cp));
	printf("ip : %d, *ip : %dByte\n", sizeof(ip), sizeof(*ip));
	printf("dp : %d, *dp : %dByte\n", sizeof(dp), sizeof(*dp));
	return 0;
}