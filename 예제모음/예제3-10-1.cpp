#include <stdio.h>
int add(int, int);
int main() {
	int a = -1;
	unsigned int b = 0xffffffff;

	printf("%d\n", add(a, b));
	return 0;
}
int add(int a, int b) {
	return (a + b);
}

//결과: -2
//b는 unsigned int여서 s.b가 없어 값이 42억 얼마인데 add()함수에 들어가면서 s.int로 형변환 되면서 -1값을 가지게 됨.
//따라서 결과값이 -2