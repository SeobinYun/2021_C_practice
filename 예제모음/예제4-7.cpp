#include <stdio.h> //문자열의 입력
#pragma warning(disable:4996)
////int main(void) { //여백 있는 문자열을 못받음
//	char str[20], chr[20];
//	printf("input string(1) : ");
//	scanf("%s", str);
//	printf("input string(2) : ");
//	scanf("%s", chr);
//	printf("str : %s\n", str);
//	printf("chr : %s\n", chr);
//	return 0;
//}
#include <string.h>
int main(void) {
	char str[20], chr[20];
	printf("input string(1) : ");
	fgets(str, sizeof(str), stdin); //띄어쓰기까지 입력받기 위해 fgets()사용
	str[strlen(str) - 1] = '\0'; //fgets() 때문에 생겨나는 \n 삭제
	printf("input string(2) : ");
	fgets(chr, sizeof(chr), stdin); //띄어쓰기까지 입력받기 위해 fgets()사용
	chr[strlen(chr) - 1] = '\0'; //fgets() 때문에 생겨나는 \n 삭제
	printf("str : %s\n", str);
	printf("chr : %s\n", chr);
	return 0;
}
