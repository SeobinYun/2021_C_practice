#include <stdio.h> //switch~case문의 예
#pragma warning(disable:4996)
int main(void) {
	int score;
	char remark;
	printf("점수를 입력하세요 : ");
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
	printf("점수는 %d 학점은 %c 입니다.\n", score, remark);
	return 0;
}