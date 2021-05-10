#include <stdio.h>
int main(void) {
	int time = 54321;
	int hour=0, min=0, sec=0;
	int res = 0;

	hour = time / 3600;
	res= time % 3600;
	min = res / 60;
	sec = res % 60;

	printf("%d초는 %d시간 %d분 %d초 입니다.\n", time, hour, min, sec);
	return 0;
}