#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
int random(int);
int input(void);
int output(int, int);
int main(void) {
	int a, r_num = 0;
	int result = 0, cnt = 0;
	srand((unsigned int)time(NULL));
	r_num = random(101);
//	printf("%d\n", r_num);
	a = input();
	result = output(a, r_num);
	printf("���~ �¾Ҵ�~~~ ��ī��ī~~ %d ��° ���� ���߼̽��ϴ�.\n", result);
	return 0;
}
int random(int n) {
	int res;
	res = rand() % n + 1;
	return res;
}
int input() {
	int num;
	while (1) {
		printf("# ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		if (num < 1 || num > 100) {
			printf("1~100 ������ ������ �Է����ּ���.\n");
		}
		else {
			break;
		}
	}
	return num;
}

int output(int num, int random_num) {
	int a = 0;
	int count = 0;
	int min = 0, max = 100;
	while (1) {
		if (num != random_num) {
			if (num > random_num) {
				max = num;
				printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n", min, max);
				count++;
				num = input();
			}
			else if (num < random_num) {
				min = num;
				printf("%d ���ٴ� ũ�� %d ���ٴ� �۽��ϴ�.\n", min, max);
				count++;
				num = input();
			}
		}
		else { //num==random_num
			count++;
			break;
		}
	}
	return count;
}



