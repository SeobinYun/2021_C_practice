// ���� �ڵ忡�� sub()�Լ��� call by pointer�ϱ� call by value �ϱ�?
// call by value ��
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