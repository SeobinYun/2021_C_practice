#include <stdio.h> //shift ������ ����
int main(void) {
	int i = 0, k = 1;
	while (i++ < 33) {
		printf(" k << %d = %d\n", i, k = k << 1);
	}
	return 0;
} 

//k<<31�� ���� S.B�� 1�� �ٲ�鼭 ���� �������� ����.
//�׸��� k<<32, k<<33�� 0�� ����