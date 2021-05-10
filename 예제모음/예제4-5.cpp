#include <stdio.h>  //sprintf() 함수의 활용 예
#include <string.h>
int main(void) {
	char str[100];
	double pi = 3.141592;
	sprintf(str, "원주율 값은 %.2lf 입니다.", pi);
	printf("%s\n",str);
	return 0;
}