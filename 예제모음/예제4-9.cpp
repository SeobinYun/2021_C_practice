#include <stdio.h>  //����� ���� �������� ���
#pragma warning(disable:4996)
int main(void) {
	int a, b, c;
	int res;
	res = scanf("%d:%d:%d", &a, &b, &c); // : ����� ��������
	printf("res=%d, a=%d, b=%d, c=%d\n", res, a, b, c);
	return 0;
}