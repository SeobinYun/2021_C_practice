#include <stdio.h>
int main(void) {
	float fa = 3.5;
	int a = 3;
	if (&fa > &a) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	return 0;
}

//C: ���������� ������, C++: ������ ����
//�ּ� ��¼����