#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int money = 0, res = 1;
	while (res == 1) {
		printf("���� ����� ���� �ݾ� �Է� : ");
		res = scanf("%d", &money);
		if (res == 1) {
			for (int a = 1; a <= money / 500; a++) {
				for (int b = 1; b <= money / 700; b++) {
					for (int c = 1; c <= money / 400; c++) {
						if ((a * 500) + (b * 700) + (c * 400) == money) {
							printf("ũ����(%d ��), �����(%d ��), �ݶ�(%d ��)\n", a, b, c);
						}
					}
				}
			}
			printf("��� �����Ͻðڽ��ϱ�?\n\n");
		}
	}
	return 0;
}