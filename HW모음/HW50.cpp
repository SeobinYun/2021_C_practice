#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int input(char*, char*);
int strcheck(char*, char);
int main(void) {
	char str[100] = { '\0' };
	char n = '\0';
	int where = 0;
	int k = 1;
	while (1) {
		k = input(str, &n);
		if (k != 0) {
			break;
		}
		where = strcheck(str, n);
		if (where != -1) {
			printf("\"%s\"문자열 안에 \'%c\'문자는 %d번 위치에 존재합니다.\n\n", str, n, where);
		}
		else if (where == -1) {
			printf("\"%s\"문자열 안에 \'%c\'문자는 존재하지 않습니다.\n\n", str, n);
		}
		else { ; }
	}
	return 0;
}
int input(char* str, char* n) {
	int a = 0, b = 0;
	while (1) {
		printf("# 문자열을 입력하시오 : ");
		a = scanf("%s", str);
		getchar();
		if (!(strcmp(str, "end"))) {
			return -1;
			break;
		}
		else { ; }
		printf("# 문자를 입력하시오 : ");
		b = scanf("%c", n);
		if (a == 1 && b == 1) {
			break;
		}
		else { ; }
	}
	return 0;
}
int strcheck(char* str, char n) {
	for (unsigned int i = 0; i < strlen(str); i++) {
		if (str[i] == n) {
			return i;
			break;
		}
		else {
			continue;
		}
	}
	return -1;
}