//#include <stdio.h>
//void swap(int a, int b);
//int main(void) {
//	int x = 1, y[3] = { 1,2,3 };
//	swap(x, y[x]);
//	for (int i = 0; i < 3; i++) {
//		printf("%d\t", y[i]);
//	}
//	return 0;
//}
//void swap(int a, int b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

//#include <stdio.h>
//void func(int a);
//int a;
//int main(void) {
//	a = 5; 
//	func(a);
//	printf("%d\n", a);
//	return 0;
//}
//void func(int a) {
//	a = 2;
//	a += a;
//}

//#include <stdio.h>
//void exchange(int*, int*);
//int main(void) {
//	int x = 5, y = 10;
//	exchange(&x, &y);
//	printf("%d %d", x, y);
//	return 0;
//}
//void exchange(int* px, int* py) {
//	int* temp;
//	temp = px;
//	px = py;
//	py = temp;
//}

//#include <stdio.h>
//#pragma warning(disable:4996)
//int main() {
//	char str[3][5] = { "star","moon", "wind" };
//	scanf("%s", str[0]);
//	for (int i = 0; i < 3; i++) {
//		printf("%s ", str[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//#define MULTI(x,y) x*y
//int main() {
//	int res;
//	res = 10 / MULTI(2, 5);
//	printf("%d\n", res);
//	return 0;
//}

//#include <stdio.h>
//int rf(int n);
//int main(void) {
//	printf("%d\n", rf(6));
//	return 0;
//}
//int rf(int n) {
//	if (n <= 2)
//		return 1;
//	return rf(n - 1) + rf(n - 2);
//}
//
//#include <stdio.h>
//int main(void){
//	int ary[10] = { 1,3,5,7,9,11,13,15,17,19 };
//printf("%d %d %d\n", *ary, *ary + 3, *(ary + 5));
//return 0;
//}

//#include <stdio.h>
//void func() {
//	static int a = 10;
//	a++;
//	printf("%d ", a);
//}
//int main() {
//	for (int i = 0; i < 3; i++) {
//		func();
//	}
//	return 0;
//}

//#include <stdio.h>
//#define MAX 5
//int main() {
//	int ary[MAX];
//	for (int i = 0;  i < MAX; i++) {
//		ary[i] = i + 1;
//	}
//	printf("MAX : %d\n", ary[MAX - 1]);
//	return 0;
//}

//#include <stdio.h>
//#define mfunc(x,y) (x<y) ? x : y
//int main(void) {
//	mfunc(3.5, 1.3);
//	return 0;
//}

//#include <stdio.h>
//int main(void) {
//	char s[] = "strawberry";
//	printf("%s\n", s + 5);
//	return 0;
//}
//
//#include <stdio.h>
//int main(void) {
//	const char* p = "C&C++";
//	char ary[] = "Program";
//	printf("%d %d %d %d \n", sizeof(p), sizeof(*p), sizeof(ary), sizeof(*ary));
//	return 0;
//}

#include <stdio.h>
void sub(double*);
int main(void) {
	double ary[5] = { 3.5,7.2,5.4,6.8,2.6 };
	printf("%d, ", sizeof(ary) / sizeof(ary[0]));
	sub(ary);
	return 0;
}
void sub(double*dp) {
	printf("%d\n", sizeof(dp) / sizeof(dp[0]));
}