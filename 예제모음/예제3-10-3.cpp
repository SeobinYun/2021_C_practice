#include <stdio.h>
int main(void) {
	float fa = 3.5;
	int a = 3;
	if (&fa > &a) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	return 0;
}

//C: 수행하지만 위험함, C++: 컴파일 에러
//주소 어쩌고여서