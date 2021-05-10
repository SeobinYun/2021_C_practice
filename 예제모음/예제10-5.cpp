// ## 연산자를 이용한 매크로 상수 및 함수 생성
#include <stdio.h>
#define MAKENAME(variable, number) variable##number
#define PRN(var,num) printf(#var #num"=%d\n", MAKENAME(var,num))
int main(void) {
	int MAKENAME(a, 1) = 10;
	int MAKENAME(x, 2) = 20;
	PRN(a, 1);
	PRN(x, 2);
	//PRN(y,3);
	return 0;
}