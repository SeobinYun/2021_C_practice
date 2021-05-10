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
	printf("* 우물의 깊이를 입력하시오(cm단위) : ");
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
	printf("　%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n", (double)depth/100.0, days);
}