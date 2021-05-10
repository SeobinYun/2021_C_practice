#include <stdio.h>  //서로 다른 형의 대소비교
int main(void) {
	int x = -1;
	unsigned int y = 1;
	if (x >= y) {
		printf(" True\n");
	}
	else {
		printf(" False\n");
	}
	return 0;
}

/*결과 값은 True임 왜냐하면 이항연산자 '>='가 연산을 하는 과정에서 
signed int인 x를 최댓값의 크기가 큰 unsigned int로 형변환하면서 1로 가득찬 x의 비트 중 절대값 비트인 s.b를 인식하지 않으면서 
x의 값을 unsigned int형의 최댓값인 42억 어쩌고로 판단함
그래서 x>=y의 성립으로 True 출력*/