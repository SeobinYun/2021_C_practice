#include <stdio.h> //전달인자와 리턴값이 없는 함수 예제
void hello(void);
int main(void) {
	hello();
	return 0;
}
void hello() {
	printf(" Hello! I am glad to meet you.\n");
}