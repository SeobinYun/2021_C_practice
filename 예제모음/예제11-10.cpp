//포인터 배열과 배열을 가리키는 포인터 예제

#include <stdio.h>
int a[] = { 0,1,2,3,4 };
int* p[] = { a, a + 1, a + 2, a + 3, a + 4 };
int** pp = p;
int main(void) {
	pp++;
	printf("%d %d %d\n", pp - p, *pp - a, **pp);
	*pp++;
	printf("%d %d %d\n", pp - p, *pp - a, **pp);
	*++pp;
	printf("%d %d %d\n", pp - p, *pp - a, **pp);
	pp = p;
	**pp++;
	//printf("%d\n", pp);
	printf("%d %d %d\n", pp - p, *pp - a, **pp);
	*++* pp;
	//printf("%d\n", pp);
	printf("%d %d %d\n", pp - p, *pp - a, **pp);
	++** pp;
	printf("%d %d %d\n", pp - p, *pp - a, **pp);
	return 0;
}