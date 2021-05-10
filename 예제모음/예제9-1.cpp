//auto 변수값의 출력
#include <stdio.h>
int main(void) {
	int a = 1; //C++ 컴파일러 사용 시 auto를 표기하면 에러 발생
	printf("a = %d\n", a);
	{
		int a = 2;
		printf("a = %d\n", a);
		{
			a += 1;
			printf("a = %d\n", a);
		}
		printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
	return 0;
}