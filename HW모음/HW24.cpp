#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
int cal(int);
void output(int, int);
int main(void) {
	int num=0, d=0;
	num = input();
	d = cal(num);
	output(num, d);
	return 0;
}

int input() {
	int dep=0;
	printf("* �칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	scanf("%d", &dep);
	return dep;
}

int cal(int dep) {
	int cur = 0, day=0;
	while (1) {
		if (dep == 0) {
			break;
		}
		else
			;
		cur += 50;
		day++;
		if (cur >= dep) {
			break;
		}
		else {
			;
		}
		cur -= 20;
	}
	return day;
}

void output(int depth, int days) {
	printf("��%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.\n", (double)depth/100.0, days);
}