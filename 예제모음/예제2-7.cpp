#include <stdio.h> //10���� 1���� 1�� �����ϸ鼭 ��� - �������� �̿��� ��������
int main(void) {
	int num = 10;
	while (num) {
		printf("%5d", num);
		num--;
	}
	return 0;
}