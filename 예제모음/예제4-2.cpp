#include <stdio.h>  //float�� �������� ����ȭ ���
int main(void) {
	float x = 22.17;
	printf("1234567890123456\n");
	printf("=%f=\n", x);
	printf("=%10.4f=\n", x);
	printf("=%-10.4f=\n", x);
	printf("=.2%f=\n", x);
	return 0;
}