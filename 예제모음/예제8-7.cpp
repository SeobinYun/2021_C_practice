#include <stdio.h>
int main(void) {
	char str[8] = "Dream";
	int i = 2;
	printf("문자열은 %s 입니다.\n", str);
	printf("%c\n", str[i++]);
	printf("%c\n", str[++i]);
	printf("%c\n", --str[i]);
	printf("%c\n", str[i]--);
	printf("문자열은 %s 입니다.\n", str);
	return 0;
}