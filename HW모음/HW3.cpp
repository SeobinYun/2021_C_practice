#include <stdio.h>
int main(void) {
	int time = 54321;
	int hour=0, min=0, sec=0;
	int res = 0;

	hour = time / 3600;
	res= time % 3600;
	min = res / 60;
	sec = res % 60;

	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", time, hour, min, sec);
	return 0;
}