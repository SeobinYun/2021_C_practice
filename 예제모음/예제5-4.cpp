#include <stdio.h> //do~while���� ��, A~Z���� ����ϴ� ���α׷�
int main(void) {
	char ch = 'A';

	do {
		putchar(ch++);
	} while (ch <= 'Z');
	return 0;
}