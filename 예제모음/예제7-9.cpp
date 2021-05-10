// 여러방향 재귀 호출의 예
#include <stdio.h>
	int cnt;
	void f(int n);

	int main(void) {
		int num = 10;
		f(num);
		printf("%d\n", cnt);
		return 0;
	}
	void f(int n) {
		if (n <= 1) {
			cnt++;
		}
		else {
			f(n / 2);
			f(n / 2);
		//	f(n / 2);
		}
		return;
	}