// 다음 코드에서 sub()함수는 call by pointer일까 call by value 일까?
// call by value 임
#include <stdio.h>
void sub(int*);
int main(void) {
	int a = 7;
	int* p;
	p = &a;

	printf("p = %p a = %d\n", p, a);
	sub(p);
	printf("p = %p a = %d\n", p, a);
	return 0;
}
void sub(int* ap) {
	*ap = 10;
}