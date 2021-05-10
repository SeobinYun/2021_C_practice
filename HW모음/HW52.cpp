#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
int input(char*);
int check(char*, int);
void output(int, char*);
int main(void) {
	char str[100] = { '\0', };
	char ori[100] = { '\0', };
	int k = 0, res = 0;
	int size = 0;
	while (1) {
		res = input(str);
		if (res != 0) {
			break;
		}
		else { ; }
		strcpy(ori, str);
		size = strlen(str);
	//	printf("size : %d\n", size);
	//	printf(" 체크 전 str: %s\n", str);
		k = check(str, size);
	//	printf("체크 후 str: %s\n", str);
		output(k, ori);
	}
	return 0;
}
int input(char* str) {
	int res = 0;
	while (1) {
		printf("# 단어 입력 : ");
		res = scanf("%s", str);
		if (strcmp(str, "end")==0) {
			return -1;
			break;
		}
		else if (res == 1) {
			getchar();
			break;
		}
		else { ; }
		getchar();
	}
	return 0;
}
int check(char* str, int size) {
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = tolower(str[i]);
		}
		else { ; }
	}
	for (int i = 0; i < size / 2; i++) {
		if (str[i] == str[size - i - 1]) {
			cnt++;
		}
		else { ; }
	}
	if (cnt == size / 2) {
		return 1;
	}
	else {
		return 0;
	}
}
void output(int check, char* str) {
	if (check == 1) {
		printf("　\"%s\" : 회문입니다!\n\n", str);
	}
	else if (check == 0) {
		printf("　\"%s\" : 회문이 아닙니다!\n\n", str);
	}
}