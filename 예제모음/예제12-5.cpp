// 구조체 배열과 포인터
#include <stdio.h>
#define CNT 3
typedef struct person {
	char name[10];
	char addr[40];
	int age;
} Person;
int main(void) {
	Person x[CNT] = { { "Kim","Seoul", 20 }, { "Lee","Pusan",30 }, { "Park","Daegu", 25 } };
	Person* ps;
	ps = x;
	for (int i = 0; i < CNT; i++) {
		printf("%s(%d) : %s\n", (ps + i)->name, (ps + i)->age, (ps + i)->addr);
	}
	return 0;
}