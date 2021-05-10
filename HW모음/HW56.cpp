#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void input(char(*p)[20]);
void sort(char(*p)[20]);
void output(char(*p)[20]);
char main(void) {
	char str[5][20] = { {'\0',}, };
	input(str);
	sort(str);
	output(str);
	return 0;
}
void input(char(*str)[20]) {
	for (int i = 0; i < 5; i++) {
		printf("# %d번 문자열을 입력하시오 : ", i+1);
		scanf("%s", &str[i]);
		getchar();
	}
}
void sort(char(*str)[20]) {
	int n;
	char temp[100] = { '\0' };
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			n = strcmp(str[i], str[i + 1]);
			if (n > 0) {
				strcpy(temp, str[i]);
				strcpy(str[i], str[i + 1]);
				strcpy(str[i + 1], temp);
			}
			else {
				continue;
			}
		}
	}
}
void output(char(*str)[20]) {
	int size = 0;
	for (int i = 0; i < 5; i++) {
		size = strlen(str[i]);
		printf("str[%d] = %s\t %c\t %c\n", i, str[i], str[i][0], str[i][size - 1]);
	}
}