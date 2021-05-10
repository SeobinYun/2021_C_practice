#include <stdio.h>
int main(void) {
	double da = 3.5;
	if (-1 < sizeof(da)) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	return 0;
}

//결과: False
//- 1의 경우 s.int, sizeof(da)의 경우 u.int임.(?왜: sizeof연산자와 strlen 함수의 결과는 음수일 수가 없기 때문에)
//여기서 s.int와 u.int를 비교하면서 - 1이 최댓값이 큰 u.int로 형변환하게 됨.
//그래서 42억 어쩌고~로 변하면서 else False;
