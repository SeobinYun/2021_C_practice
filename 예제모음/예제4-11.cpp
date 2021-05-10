#include <stdio.h> //파일의 끝(Ctrl+Z, Unix에서 Ctrl+D)까지 대소문자 변환
int main() {
	char ch;
	while ((ch = getchar()) != EOF) {
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