#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int a=0, b=0, res;
	while (1){
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		res = scanf("%d %d", &a, &b);
		if (res!=2) {
			break;
		}
		else if (a < b) {
			printf("%d - %d = %d\n", b, a, b - a);
		}
		else if (a >= b) {
			printf("%d - %d = %d\n", a, b, a - b);
		}
		else {
			;
		}
		while (getchar() != '\n') {
			;
		}
		
	}
	return 0;
}