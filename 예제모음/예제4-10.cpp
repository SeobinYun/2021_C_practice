#include <stdio.h> //영문자를 입력 받아 소문자와 대문자를 서로 변환하는 프로그램
int main(void) {
	char ch;
	while ((ch = getchar()) != '#') {
		if (ch >= 'a' && ch <= 'z') {
			ch -= 'a' - 'A';
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}
		putchar(ch);
	}
	return 0;
}