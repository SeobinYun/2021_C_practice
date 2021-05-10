#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(void) {
	double h = 0;
	char gender;
	char name[50];

	printf("# 성명 입력 : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0'; //배열 내 개행문자 제거

	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &h);
	while (getchar() != '\n') {  //버퍼 비우기
		;
	}

	printf("# 성별입력(M/F) : ");
	gender = getchar();
	
	if (gender == 'M') {
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.\n", name, h);
	}
	else if (gender == 'F') {
		printf("%s씨의 키는 %.2lfcm이고 여성입니다.\n", name, h);
	}
	else {
		;
	}
	return 0;
}