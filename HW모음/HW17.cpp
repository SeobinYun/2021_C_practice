#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(void) {
	double h = 0;
	char gender;
	char name[50];

	printf("# ���� �Է� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0'; //�迭 �� ���๮�� ����

	printf("# Ű �Է�(cm����) : ");
	scanf("%lf", &h);
	while (getchar() != '\n') {  //���� ����
		;
	}

	printf("# �����Է�(M/F) : ");
	gender = getchar();
	
	if (gender == 'M') {
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n", name, h);
	}
	else if (gender == 'F') {
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n", name, h);
	}
	else {
		;
	}
	return 0;
}