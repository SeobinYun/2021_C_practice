#include <stdio.h>
int add(int, int);
int main() {
	int a = -1;
	unsigned int b = 0xffffffff;

	printf("%d\n", add(a, b));
	return 0;
}
int add(int a, int b) {
	return (a + b);
}

//���: -2
//b�� unsigned int���� s.b�� ���� ���� 42�� ���ε� add()�Լ��� ���鼭 s.int�� ����ȯ �Ǹ鼭 -1���� ������ ��.
//���� ������� -2