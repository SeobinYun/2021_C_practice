//미리 정의된 매크로
#include <stdio.h>
void sub();
int main(void) {
	printf("파일명 : %s\n", __FILE__);
	printf("수행날짜 : %s\n", __DATE__);
	printf("수행시간 : %s\n", __TIME__);
	printf("현재 라인 번호 : %d\n", __LINE__);
	sub();
	return 0;
}
void sub() {
	printf("현재 라인 번호 : %d\n", __LINE__);
}