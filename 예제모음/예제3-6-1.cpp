#include <stdio.h> 
int main(void) {
	float x; //��ȿ���е� : 10���� ���� 7~8�ڸ�
	int count = 1;
	for (x = 100000001.0f; x <= 10000000010.0f; x += 1.0f) { //���ѷ�����
		printf("%d. x = %.30f\n", count++, x);
	}
	return 0;
}
// iterator �ݺ��� ������ �ݵ�� ������ ���