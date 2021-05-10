//char 배열과 char 포인터
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(void) {
	const char* p = "C program";
	char str[20] = "C program";

	//문자열 변경 가능 여부를 판단해보세요.
	//p[0] = 'B'; //compile error
	str[0] = 'B'; //가능
	printf("p : %s\n", p);
	printf("str : %s\n", str);

	//strcpy(p, "Java"); //Runtime error or compile error
	strcpy(str, "Java");

	printf("p : %s\n", p);
	printf("str : %s\n", str);
	
	p = "Python programming";
	//str = "Python programming"; //compile error

	printf("p : %s\n", p);
	printf("str : %s\n", str);
	return 0;
}