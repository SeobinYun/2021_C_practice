// ����ü ����
#include <stdio.h>
union number {
	char a;
	short b;
	long c;
}abc;

int main(void) { //little endian ǥ��� �Ųٷ� ǥ�õ� 
	abc.c = (long)0x12345678;
	printf("Long Value : %08lx\n", abc.c);
	printf("Short Value : %08hx\n", abc.b);
	printf("Char Value : %08x\n", abc.a);
	return 0;
}