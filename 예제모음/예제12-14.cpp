// 구조체와 공용체의 혼용
#include <stdio.h>
struct str {
	char c1, c2, c3, c4;
};
union abc {
	struct str chr;
	char a;
	short b;
	long c;
};
int main(void) {
	union abc value;
	value.c = (long)0x12345678;
	printf("a = %08x\n", value.a);
	printf("b = %08x\n", value.b);
	printf("c = %08x\n", value.c);
	printf("c1 = %08x\n", value.chr.c1);
	printf("c2 = %08x\n", value.chr.c2);
	printf("c3 = %08x\n", value.chr.c3);
	printf("c4 = %08x\n", value.chr.c4);
}