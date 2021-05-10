// 나열형의 간단한 예
#include <stdio.h>
enum Nation {
	KOREA,
	USA,
	JAPAN,
	CHINA
};
int main(void) {
	//나열형 변수를 선언하여 사용할 때의 특징
	enum Nation x; //Nation 타입의 x변수 선언을 하면 x변수에는 나열형 선언 시 지정한 상수값만 저장가능함
	x = KOREA;
	printf("x=%d\n", x);
	//x=0; 에러발생
	
	//매크로 상수 대용으로 사용하는 나열형
	printf("%d\n", KOREA); //#define KOREA (0)한 효과
	printf("%d\n", USA); //#define USA (1)한 효과
	printf("%d\n", JAPAN); //#define JAPAN (2)한 효과
	printf("%d\n", CHINA); //#define CHINA (3)한 효과
	return 0;
}