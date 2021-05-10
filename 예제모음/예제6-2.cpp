#include <stdio.h> //1의 보수 연산자 예제
int main() {
	short num = 0x0f0f, res;
	res = ~num;
	printf(" num = %#hx res = %#hx\n", num, res); //0xf0f 0xf0f0
	return 0;

}

// %x로 출력하면
// 0xf0f 0xfffff0f0(메모리 확장됨...)
