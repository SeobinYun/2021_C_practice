#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)
int input(void);
int output(int, int);
int main(void) {
	int my = 0, random = 0, result = 0;
	int w = 0, d = 0;
	srand((unsigned int)time(NULL));
	while (1) {
		random = rand() % 3 + 1;
		my = input();
		result = output(my, random);
		if (result == 1) {
			w++;
			continue;
		}
		else if (result == 2) {
			d++;
			continue;
		}
		else if (result == 3) {
			break;
		}
		else {
			;
		}
	}
	printf("게임결과 : %d 승 %d 무\n", w, d);
	return 0;
}

int input() {
	int put = 0;
	while (1) {
		printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
		scanf("%d", &put);
		//getchar();
		if (!(put >= 1 && put <= 3)) {
			printf(" 1 ~ 3 사이의 숫자를 다시 입력하세요. \n");
			continue;
		}
		else {
			break;
		}
	}
	return put;
}

int output(int my_num, int ran_num) {
	int a = 0;
	if (my_num == 1) {
		switch (ran_num) {
		case 1: printf("　당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n"); 
			a = 2;
			break;
		case 2: printf("　당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n");
			a = 1;
			break;
		case 3: printf("　당신은 바위 선택, 컴퓨터는 보 선택 : 졌습니다.\n"); 
			a = 3;
			break;
		default: break;
		}
	}
	else if (my_num == 2) {
		switch (ran_num) {
		case 1: printf("　당신은 가위 선택, 컴퓨터는 바위 선택 : 졌습니다.\n");
			a = 3;
			break;
		case 2: printf("　당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n");
			a = 2;
			break;
		case 3: printf("　당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n");
			a = 1;
			break;
		default: break;
		}
	}
	else if (my_num == 3) {
		switch (ran_num) {
		case 1: printf("　당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n"); 
			a= 1;
			break;
		case 2: printf("　당신은 보 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n"); 
			a= 2;
			break;
		case 3: printf("　당신은 보 선택, 컴퓨터는 보 선택 : 졌습니다.\n"); 
			a= 3;
			break;
		default: break;
		}
	}
	else {
		;
	}
	return a;
}