#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int a, b, res;
	char str[10];
	res = scanf("%d %d", &a, &b); //10 2#b 를 입력했을 때 //'#b\n'이 잔여데이터로 남음.
	scanf("%s", str); //stdin의 잔여데이터를 비우지 않아줘서 2번째 scanf()의 입력기회조차 주어지지 않음   
	printf("%d\n", a); //10
	printf("%d\n", b); //2
	printf("%s\n", str); //#b
	return 0;
}

//따라서 res=scanf()뒤에 myflush()함수 써야함.