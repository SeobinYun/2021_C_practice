#include <stdio.h>  //숫자, 문자, 문자열의 입력
#pragma warning(disable:4996)
int main(void) {
	int num, res;
	char ch, str[20];
	printf("input number, character, string : ");
	res = scanf("%d %c %s", &num, &ch, str);
	printf("number : %d\t character : %c\t string : %s\n", num, ch, str);
	printf("res = %d\n", res);
	return 0;
}