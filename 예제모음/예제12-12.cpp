// 비트필드 예제
#include <stdio.h>
#pragma warning(disable:4996)
struct bitsample {
	unsigned a : 2;
	unsigned b : 3;
	int c : 3;
	int d : 10;
};
int main(void) {
	struct bitsample bx;
	int a, b, c, d;
	scanf("%u %u", &a, &b); //scanf("%d %d", &bx.c, &bx.d);는 불가능 왜냐하면 주소&는 바이트 단위, /
	//bit field 멤버의 시작주소 추출이 불가능하기 때문
	scanf("%d %d", &c, &d);
	bx.a = a;
	bx.b = b;
	bx.c = c;
	bx.d = d;
	printf("%u %u %d %d\n", bx.a, bx.b, bx.c, bx.d);
	return 0;
}