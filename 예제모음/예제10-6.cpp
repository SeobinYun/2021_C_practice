//��ũ���Լ��� �Ϲ��Լ��� ����
#include <stdio.h>
#define SQUARE(x) x*x  //(x)*(x)�� �����غ���
int square(int);
int main(void) {
	int res;
	res = square(3 + 4);
	printf("�Ϲ� �Լ��� �̿��� 3+4�� �ŵ����� : %d\n", res);
	res = SQUARE(3 + 4);
	printf("��ũ�� �Լ��� �̿��� 3+4�� �ŵ����� : %d\n", res);
	return 0;
}
int square(int x) {
	return x * x;
}