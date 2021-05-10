#include <stdio.h> //do~while문의 예, A~Z까지 출력하는 프로그램
int main(void) {
	char ch = 'A';

	do {
		putchar(ch++);
	} while (ch <= 'Z');
	return 0;
}