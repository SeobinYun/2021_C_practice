//fgetc() ����

#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	FILE* fp;
	char ch;
	fp = fopen("C:\\data\\test1.txt", "rt");
	if (fp == NULL) { // ���� ���� ����!
		printf("file open error!\n");
		return 1;
	}

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) { //fgetc�� ���ϰ��� EOF��
			break;
		}
		printf("%c", ch);
	}

	fclose(fp);
	return 0;
}