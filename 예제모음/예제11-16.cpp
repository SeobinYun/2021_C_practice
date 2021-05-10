// const와 포인터의 활용
#include <stdio.h>
const char* sub(const char* const);
int main(void) {
	char str[100] = "apple pie";
	const char* resp;
	resp = sub(str);
	printf("%s\n", resp);
	return 0;
}

const char* sub(const char* const p) {
	printf("%s\n", p);
	printf("%s\n", p + 6);
	//printf("%s\n", ++p); const화 되어있기 때문에 안됨 
	//printf("%c\n", ++p[0]);

	return p;
}