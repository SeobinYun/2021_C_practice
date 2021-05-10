//이차원 문자 배열 예제
#include <stdio.h>
void string_print(char(*)[6], int);
int main(void) {
	char str[3][6] = { "Year", "Month", "Day" };
	int row = 0;
	row = sizeof(str) / sizeof(str[0]);
	string_print(str, row);
	return 0;
}
void string_print(char(*cp)[6], int row) {
	for (int i = 0; i < row; i++) {
		printf("%d행의 문자열은 %s이고, 첫글자는 %c입니다.\n", i, &cp[i][0], cp[i][0]);
	}
}