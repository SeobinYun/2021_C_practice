#include <stdio.h> //10���� 3���� �Է� �޾� �� �� ����ϱ�
#pragma warning(disable:4996)
int main(void) {
	int a = 0, b = 0, c = 0, result, total;
	printf("���� ������ �Է��Ͻÿ� : ");
	result = scanf("%d %d %d", &a, &b, &c);
	if (result == 3) {
		total = a + b + c;
		printf("�� ���� ���� %d�Դϴ�.\n", total);
	}
	else {
		printf("�Էµ����� �����Դϴ�.\n");
	}
	printf("scanf()�Լ��� ���ϰ� : %d\n", result);
	return 0;
}