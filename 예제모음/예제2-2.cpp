#include <stdio.h> //������Ը� �Է¹޾� 300g�̻��̸� 1000��, 300g�̸��̸� 500���� ����ϴ� ���α׷�
#pragma warning(disable:4996)
int main(void) {
	int weight;
	scanf("%d", &weight);
	if (weight >= 300) {
		printf("������� 1000��");
	}
	else {
		printf("������� 500��");
	}
	return 0;
}