//fgetc(), fputc() ����

#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	FILE* fp;
	FILE* ofp;
	char ch;
	fp = fopen("C:\\data\\test1.txt", "rt");
	if (fp == NULL) { // ���� ���� ����!
		printf("file open error!\n");
		return 1;
	}

	ofp = fopen("C:\\data\\res1.txt", "wt");
	if (ofp == NULL) {
		printf("file opne error!\n");
		return 1;
	}

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) { //fgetc�� ���ϰ��� EOF��
			break;
		}
		printf("%c", ch);
		fputc(ch, ofp);
	}

	fclose(fp);
	fclose(ofp);
	return 0;
}