//1���� �����迭�� ������ ����
#include <stdio.h>
int main(void) {
	int ary[5] = { 10,20,30,40,50 };
	int* ptr, i;
	ptr = ary;
	for (i = 0; i < 5; i++) {
		printf("%6d", ary[i]);
	}
	printf("\n\n");
	for (i = 0; i < 5; i++) {
		printf("%6d", *(ptr+i));
	}
	printf("\n\n");
	for (i = 0; i < 5; i++) {
		printf("%6d", *(ary+i));
	}
	printf("\n\n");
	return 0;
}