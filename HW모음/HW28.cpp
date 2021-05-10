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
	printf("* 영문자 대소문자 개수 : %d개\n", eng);
	printf("* 숫자문자 개수 : %d개\n", num);
	printf("* 여백문자(space, tab, enter) 개수 : %d개\n", sort);
	printf("* 그 외 기타문자 개수 : %d개\n", etc);
	return 0;
}