#include <stdio.h>
#include <string.h>
int main(void) {
	char c=0;
	int eng = 0, num = 0, sort = 0, etc = 0;

	while (1) {
		c = getchar();
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
			eng++;
		}
		else if (c >= '0' && c <= '9') {
			num++;
		}
		else if (c == ' ' || c == '\t' || c == '\n') {
			sort++;
		}
		else if (c == EOF) {
			break;
		}
		else {
			etc++;
		}
	}
	printf("* ������ ��ҹ��� ���� : %d��\n", eng);
	printf("* ���ڹ��� ���� : %d��\n", num);
	printf("* ���鹮��(space, tab, enter) ���� : %d��\n", sort);
	printf("* �� �� ��Ÿ���� ���� : %d��\n", etc);
	return 0;
}