#include <stdio.h> //&와 *연산자 예제
int main(void) {
	int x = 5, * ptr;
	ptr = &x; //ptr주소: 200, x 주소: 100이라고 가정
	printf("%p %p %p %d %d\n", &ptr, ptr, &x, x, *ptr); // 200 100 100 5 5  
	return 0;
}