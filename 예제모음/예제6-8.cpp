#include <stdio.h> //���� ������ ����
#pragma warning(disable:4996)
int main(void) {
	int a, b;
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	(a > b) ? printf("%d > %d \n", a, b) : (a < b) ? printf("%d < %d\n", a, b) : printf("%d == %d \n", a, b);
	return 0;
}