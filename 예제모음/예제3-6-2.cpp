#include <stdio.h> //��ȯ�Ҽ� ���� ����
int main(void) {
	float x;
	int count = 1;
	for (x = 0.1f; x <= 1.0f; x += 0.1f) { //�ǵ��� 10ȸ �ݺ������� �����δ� 9ȸ �ݺ�
		printf("%d. x = %.10f\n", count++, x);
	}
	return 0;
}
// iterator �ݺ��� ������ �ݵ�� ������ ���
// 0.100000xxx xxx�� ������ ����