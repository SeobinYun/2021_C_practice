#include <stdio.h> //break�� continue ����
int main(void) {
	int num;
	for (num = 1; num < 10; num++) {
		if (num == 5) { //5�� �� for���� �׳� ���� 1  2  3  4 �� ���
			break;
		}
		printf("%3d", num);
	}
	
	putchar('\n');

	for (num = 1; num < 10; num++) {
		if (num == 5) { //5�� �� for�� ���� �ö󰡸鼭 5������ ��Ȳ�� ��� 1  2  3  4  6  7....
			continue;
		}
		printf("%3d", num);
	}
	return 0;
}