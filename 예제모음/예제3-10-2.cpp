#include <stdio.h>
int main(void) {
	double da = 3.5;
	if (-1 < sizeof(da)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	return 0;
}

//���: False
//- 1�� ��� s.int, sizeof(da)�� ��� u.int��.(?��: sizeof�����ڿ� strlen �Լ��� ����� ������ ���� ���� ������)
//���⼭ s.int�� u.int�� ���ϸ鼭 - 1�� �ִ��� ū u.int�� ����ȯ�ϰ� ��.
//�׷��� 42�� ��¼��~�� ���ϸ鼭 else False;
