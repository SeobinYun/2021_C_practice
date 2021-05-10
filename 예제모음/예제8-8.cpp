//입력된 문자열 중 각 영문자의 발생 빈도수 출력 예제
#include <stdio.h>
int main(void) {
	int c, large[26] = { 0, }, small[26] = { 0, };
	int size = sizeof(large) / sizeof(large[0]);
	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z') {
			++large[c - 'A'];
		}
		else if (c >= 'a' && c <= 'z') {
			++small[c - 'a'];
		}
		else { ; }
	}
	for (int i = 0; i < size; i++) {
		if (i % 6 == 0) {
			printf("\n");
		}
		printf("%4c : %3d", 'A' + i, large[i]);
	}
	for (int i = 0; i < size; i++) {
		if (i % 6 == 0) {
			printf("\n");
		}
		printf("%4c : %3d", 'a' + i, small[i]);
	}
	return 0;
}