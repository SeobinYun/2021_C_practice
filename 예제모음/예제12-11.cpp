// 구조체 padding 예제2
#include <stdio.h>
struct Arr1 {
	char c[9]; //10
	short h; //2
	int i; //4
	double d; //8
};

struct Arr2 {
	char c[11]; //12
	short h; //4
	int i; //8
	double d;  //8
};

int main(void) {
	struct Arr1 a1;
	struct Arr2 a2;

	printf(" &a1.c : %u\n &a1.h : %u\n &a1.i : %u\n &a1.d : %u\n", &a1.c, &a1.h, &a1.i, &a1.d);
	printf("Data1 size : %u\n", sizeof(struct Arr1));
	printf("-----------------------------------------\n\n");


	printf(" &a2.c : %u\n &a2.h : %u\n &a2.i : %u\n &a2.d : %u\n", &a2.c, &a2.h, &a2.i, &a2.d);
	printf("Data2 size : %u\n", sizeof(struct Arr2));
	printf("-----------------------------------------\n\n");
}