#include <stdio.h> //unsigned�� �������� �������� �����Ѵ�? ����Ǿ� �ִ� ���� ������� ��µǴ� ���� ���ĺ�ȯ ���ڿ��� �ؼ��� ������. 
int main(void) {
	short x = -32767;
	unsigned short y = x;
	printf("x = %hd\t y = %hu\n", x, y);
	printf("x = %hu\t y = %hd\n", x, y);
	return 0;
}