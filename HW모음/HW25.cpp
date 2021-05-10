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
	printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다.\n", result);
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
		printf("# 숫자를 입력하시오 : ");
		scanf("%d", &num);
		if (num < 1 || num > 100) {
			printf("1~100 사이의 정수를 입력해주세요.\n");
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
				printf("%d 보다는 크고 %d 보다는 작습니다.\n", min, max);
				count++;
				num = input();
			}
			else if (num < random_num) {
				min = num;
				printf("%d 보다는 크고 %d 보다는 작습니다.\n", min, max);
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



