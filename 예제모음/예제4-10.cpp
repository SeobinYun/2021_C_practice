#include <stdio.h> //�����ڸ� �Է� �޾� �ҹ��ڿ� �빮�ڸ� ���� ��ȯ�ϴ� ���α׷�
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