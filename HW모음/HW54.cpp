#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand((unsigned int)time(NULL));
	int ary[3][4] = { {0,0}, };
	int yeol[4] = { 0, };
	int sum = 0;
	for (int i = 0; i < 12; i++) {
		ary[0][i] = rand() % 9 + 1;
	}
	for (int i = 0; i < 3; i++) {
		printf("%d��    : ", i);
		for (int j = 0; j < 4; j++) {
			printf("%4d ", ary[i][j]);
			sum += ary[i][j];
		}
		for (int j = 0; j < 3; j++) {
			yeol[i] += ary[j][i];
		}
		printf("\t%d ���� �� : %d\n", i, sum);
		sum = 0;
	}
	printf("���� ��: %4d %4d %4d %4d\n", yeol[0], yeol[1], yeol[2], yeol[3]);
	return 0;
}