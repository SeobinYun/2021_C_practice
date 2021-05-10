#include <stdio.h> //shift 연산자 예제
int main(void) {
	int i = 0, k = 1;
	while (i++ < 33) {
		printf(" k << %d = %d\n", i, k = k << 1);
	}
	return 0;
} 

//k<<31일 때는 S.B가 1로 바뀌면서 값이 음수값이 나옴.
//그리고 k<<32, k<<33은 0이 나옴