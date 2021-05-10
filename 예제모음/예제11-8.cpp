//문자배열의 포인터 표현
#include <stdio.h>
int main(void) {
	char str[3][6] = { "Year", "Month", "Day" };
	for (int i = 0; i < 3; i++) {
		printf("%d행의 시작주소 %p이고, %d행의 시작문자는 %c이다.\n", i, *(str + i), i, *(*(str + i) + 0));
	}
	return 0;
}