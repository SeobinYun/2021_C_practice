#include <stdio.h> //논리 연산자 예제
#pragma warning(disable:4996)
int main(void) {
	char ch;
	int i = 0;
	printf("입력한 문자에 대하여 대/소 판별 해드립니다.\n");
	while (i++ < 3) {
		printf("\n문자를 하나 입력하고 엔터 치세요 : ");
		scanf("%c", &ch);
		getchar();
		if (ch >= 'A' && ch <= 'Z') {
			printf("입력한 문자는 대문자입니다.\n");
		}
		else if (ch >= 'a' && ch <= 'z') {
			printf("입력한 문자는 소문자입니다.\n");
		}
	}
	return 0;
}