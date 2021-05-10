#include <stdio.h>
#pragma warning(disable:4996)
int input(void);
int main(void) {
	int gram;
	int i=0;
	while (i < 10) {
		gram = input();
		if (gram < 150) {
			printf("* 메추리알 가지고 장난하지 마시오~ ^^\n");
			continue;
		}
		else if (gram > 500) {
			printf("* 타조알 가지고 장난하지 마시오~ ^^\n");
			continue;
		}
		else {
			i++;
			printf("* 현재 달걀의 수: %d\n", i);
		}
	}
	printf("\n*** 달걀 포장이 끝났습니다.\n");
	return 0;
}
int input() {
	int g;
	printf("# 계란의 무게를 입력하세요(단위 : g) : ");
	scanf("%d", &g);
	return g;
}