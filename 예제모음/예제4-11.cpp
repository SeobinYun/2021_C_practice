#include <stdio.h> //������ ��(Ctrl+Z, Unix���� Ctrl+D)���� ��ҹ��� ��ȯ
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