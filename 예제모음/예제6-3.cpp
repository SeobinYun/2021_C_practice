#include <stdio.h> //&�� *������ ����
int main(void) {
	int x = 5, * ptr;
	ptr = &x; //ptr�ּ�: 200, x �ּ�: 100�̶�� ����
	printf("%p %p %p %d %d\n", &ptr, ptr, &x, x, *ptr); // 200 100 100 5 5  
	return 0;
}