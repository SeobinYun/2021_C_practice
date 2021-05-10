#include <stdio.h>
void sub(int *);
int main(void) {
	double a = 10.5;
	sub(&a);
	return 0;
}
void sub(int *p) {
	printf("p가 가리키는 것: %d\n", *p);
}

//C언어: data의 왜곡된 값 출력, C++: 컴파일에러