#include <stdio.h> //������ 2���� ��� - ������ Ƚ���� �ݺ�
#pragma warning(disable:4996)
int main(void) {
	int i = 1;
	while (i < 10) {
		printf("2 * %d = %d\n", i, 2 * i);
		i++;
	}
	return 0;
}