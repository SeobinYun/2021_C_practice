#include <stdio.h> //���� for���� �̿��� Ȧ�� �� ���ϱ�
int main(void) {
	int i, s;
	for (i = 1, s = 0; i <= 100; i += 2) {
		s += i;
	}
	printf(" 1 + 3 + ... + 99 = %d\n", s);
	return 0;
}