#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int a = 0, b = 0, c = 0;
	char ch;
	printf("국, 영, 수 점수 입력 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("반명 입력 (A~C) : ");
	ch = getchar(); 
	printf("성적 : %d\n class명 : %c\n", a + b + c, ch);
	return 0;
}
//
//만약 80 90 75를 입력한다면, %d들이 stdin에서 값을 가져간다음에 남은 잔여데이터인 \n을 처리해주지 않았기 때문에
//ch=getchar()은 stdin에 남은 \n을 값으로 가져가버림.
//따라서 반명입력의 기회조차 얻지 못한채 버퍼가 닫힘.
//고로 잔여데이터를 처리하기 위해 scanf()함수 다음에 myflush() 함수를 넣어주어야 함.
//void myflush() {
//	char c;
//	while ((c = getchar()) != '\n') { 
//		;
//	}
//}
//이 함수 추가해서 버퍼비우기