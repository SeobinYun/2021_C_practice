#include <stdio.h> //���ڿ��� ����ȭ ���
int main(void) {
	printf("1234567890123456\n");
	printf("=%10.5s=\n", "Happiness");
	printf("=%-10.5s=\n", "Happiness");
	printf("=%*.*s=\n", 15,7,"Happiness");
	return 0;
}