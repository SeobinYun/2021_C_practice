#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	/*double a[6] = { 0 };
	double sum=0;
	for (int i = 1; i < 6; i++) {
		printf("- %d �� �л��� Ű��? ", i);
		scanf("%lf", &a[i]);
	}
	
	for (int i = 1; i < 6; i++) {
		sum += a[i];
	}

	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.\n", sum / 5.0);*/

	double height=0, sum=0;
	for (int i = 1; i < 6; i++){
		printf("- %d �� �л��� Ű��? ", i);
		scanf("%lf", &height);
		sum += height;
	}
	printf("�ټ� ���� ��� Ű�� %.1lf cm �Դϴ�.\n", sum / 5.0);
	return 0;
}