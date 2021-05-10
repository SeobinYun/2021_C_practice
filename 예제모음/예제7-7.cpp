// 무한 재귀 호출에서 빠지는 경우의 예
#include <stdio.h>
int i = 0;
void sub();
int main(void) {
	sub();
	return 0;
}
void sub() {
	printf("i = %d\n", ++i);
	sub(); // 유도 부분 (inductive part)
}