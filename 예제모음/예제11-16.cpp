// const�� �������� Ȱ��
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
	//printf("%s\n", ++p); constȭ �Ǿ��ֱ� ������ �ȵ� 
	//printf("%c\n", ++p[0]);

	return p;
}