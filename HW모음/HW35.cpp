#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int a = 0, sum = 0, res = 0;
	for (int i = 1; i <=5 ; ) {
		printf("0���� ū���� �Է��Ͻÿ�(%d ��°) : ", i);
		scanf("%d", &a);
		if (a < 1) {
			continue;
		}
		else {
			sum += a;
			i++;
		}
	}
	printf("�Էµ� ���� �� �� : %d", sum);
	return 0;
}