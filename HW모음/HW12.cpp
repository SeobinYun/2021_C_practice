#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	char name[100];
	printf("이름을 입력하시오 : ");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}