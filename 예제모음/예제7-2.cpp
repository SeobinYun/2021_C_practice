#include <stdio.h> //�������ڿ� ���ϰ��� �ִ� �Լ� ����
#pragma warning(disable:4996)
int abs(int);
int main(void) {
	int num;
	printf("�ϳ��� ���� �Է��ϼ��� : ");
	scanf("%d", &num);
	printf("�Էµ� ���� ���밪�� : %d �Դϴ�.\n", abs(num));
	return 0;
}

int abs(int x) {
	if (x > 0) {
		return (x);
	}
	else {
		return (-x);
	}
}