#include <stdio.h>
int main(void) {
	char str[8] = "Dream";
	int i = 2;
	printf("���ڿ��� %s �Դϴ�.\n", str);
	printf("%c\n", str[i++]);
	printf("%c\n", str[++i]);
	printf("%c\n", --str[i]);
	printf("%c\n", str[i]--);
	printf("���ڿ��� %s �Դϴ�.\n", str);
	return 0;
}