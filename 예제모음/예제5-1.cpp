#include <stdio.h> //switch~case���� ��
#pragma warning(disable:4996)
int main(void) {
	int score;
	char remark;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10:
	case 9: remark = 'A';
		break;
	case 8: remark = 'B';
		break;
	case 7: remark = 'C';
		break;
	case 6: remark = 'D';
		break;
	default: remark = 'F';
		break;
	}
	printf("������ %d ������ %c �Դϴ�.\n", score, remark);
	return 0;
}