#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	char c='A';
	while (1) {
		printf("* 영문자 대문자 입력('A'~'Z'): ");
		scanf("%c", &c);
		getchar();
		if (c >= 'A' && c <= 'Z') {
			for (int i = 0; i <= c-'A'; i++) {
				for (int j = 0; j <= i; j++) {
					printf("%c", c-j);
				}
				printf("\n");
			}
			printf("\n");
		}
		else {
			break;
		}
	}
		return 0;	
}