// ������ ���� �迭 ����
#include <stdio.h>
#pragma warning(disable:4996)
void array_input(int(*)[4], int);
void array_output(int(*)[4], int);
int main(void) {
	int num_ary[3][4];
	int row, col;

	//���� ���� ���ϱ�
	row = sizeof(num_ary) / sizeof(num_ary[0]);
	//���� ���� ���ϱ�
	col = sizeof(num_ary) / sizeof(num_ary[0][0]);
	array_input(num_ary, row);
	array_output(num_ary, row);
	return 0;
}

void array_input(int(*p)[4], int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d�� %d�� ���� �� �Է� : ", i, j);
			scanf("%d", &p[i][j]);
		}
	}
}

void array_output(int(*p)[4], int row) {
	int i, j;
	for (i = 0; i < row; i++) {
		printf("%d�� : ", i);
		for (j = 0; j < 4; j++) {
			printf("%3d ", p[i][j]);
		}
		printf("\n");
	}
}