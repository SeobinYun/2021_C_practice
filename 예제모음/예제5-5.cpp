#include <stdio.h> //break와 continue 예제
int main(void) {
	int num;
	for (num = 1; num < 10; num++) {
		if (num == 5) { //5일 때 for문이 그냥 끝남 1  2  3  4 만 출력
			break;
		}
		printf("%3d", num);
	}
	
	putchar('\n');

	for (num = 1; num < 10; num++) {
		if (num == 5) { //5일 때 for문 위로 올라가면서 5제외의 상황만 출력 1  2  3  4  6  7....
			continue;
		}
		printf("%3d", num);
	}
	return 0;
}