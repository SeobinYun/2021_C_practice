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
			printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� %d�� ��ġ�� �����մϴ�.\n\n", str, n, where);
		}
		else if (where == -1) {
			printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� �������� �ʽ��ϴ�.\n\n", str, n);
		}
		else { ; }
	}
	return 0;
}
int input(char* str, char* n) {
	int a = 0, b = 0;
	while (1) {
		printf("# ���ڿ��� �Է��Ͻÿ� : ");
		a = scanf("%s", str);
		getchar();
		if (!(strcmp(str, "end"))) {
			return -1;
			break;
		}
		else { ; }
		printf("# ���ڸ� �Է��Ͻÿ� : ");
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