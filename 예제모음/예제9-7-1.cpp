//�������� abc.exe�� �����ϱ� ���� ù��° ��� a.c
#include <stdio.h>
int reset(), next(), last();
int now(int);
void main() {
	int i, j;
	i = reset();
	for (j = 0; j <= 3; j++) {
		printf("i = %d\t j = %d\n", i, j);
		printf("next() = %d\n", next());
		printf("last() = %d\n", last());
		printf("next(i+j) = %d\n", now(i + j));
	}
}