#include <stdio.h>
void sub(int *);
int main(void) {
	double a = 10.5;
	sub(&a);
	return 0;
}
void sub(int *p) {
	printf("p�� ����Ű�� ��: %d\n", *p);
}

//C���: data�� �ְ�� �� ���, C++: �����Ͽ���