#include <stdio.h> //�� ������ ����
#pragma warning(disable:4996)
int main(void) {
	char ch;
	int i = 0;
	printf("�Է��� ���ڿ� ���Ͽ� ��/�� �Ǻ� �ص帳�ϴ�.\n");
	while (i++ < 3) {
		printf("\n���ڸ� �ϳ� �Է��ϰ� ���� ġ���� : ");
		scanf("%c", &ch);
		getchar();
		if (ch >= 'A' && ch <= 'Z') {
			printf("�Է��� ���ڴ� �빮���Դϴ�.\n");
		}
		else if (ch >= 'a' && ch <= 'z') {
			printf("�Է��� ���ڴ� �ҹ����Դϴ�.\n");
		}
	}
	return 0;
}