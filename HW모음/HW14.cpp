#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(void) {
	char str[100] = { '\0', };
	printf("* 문자열 입력 : ");
	scanf("%s", str);
/*	printf("[");
	for (int i = 0; i < (strlen(str) / 2); i++) {
		printf("□");
	}
	for (int i = 0; i < (strlen(str) / 2); i++) {
		printf("%c", str[i]);
	}
	printf("...]\n");*/
	printf("[%*.*s...]", strlen(str),(strlen(str)/2), str);
	return 0;
}