#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(void) {
	char f_name[10]= { '\0', }, l_name[10] = { '\0', };
	printf("#성을 입력하시오 : ");
	scanf("%s", l_name);
	
	printf("#이름을 입력하시오 : ");
	scanf("%s", f_name);

	printf("%s   %s\n", l_name, f_name);
	printf("%*d   %*d\n", strlen(l_name), strlen(l_name), strlen(f_name), strlen(f_name));
	return 0;
}