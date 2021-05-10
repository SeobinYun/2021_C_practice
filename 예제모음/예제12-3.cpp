// 재정의된 반환 값
#include <stdio.h>
#pragma warning(disable:4996)
typedef void (*func_t)(void); //함수포인터의 형명재지정
void vegetable();
void fruit();
void grain();
func_t getGroup(int);
int main(void) {
	int menu = 0;
	void (*fptr)(void) = NULL;
	while (1) {
		printf("1. vegetable / 2. fruit / 3. grain / 4. quit : ");
		scanf("%d", &menu);
		if (menu == 4) {
			break;
		}
		fptr = getGroup(menu);
		if (fptr != NULL) {
			fptr();
		}
	}
	return 0;
}

func_t getGroup(int menu) { /* 메뉴번호에 해당하는 함수의 시작주소를 리턴하는 함수
							void (*)(void) getGroup(int menu) 이런 형태의 리턴은 에러 발생
							void (*getGroup(int menu))(void) 이건 가능 */
	switch (menu) {
	case 1: return vegetable;
	case 2: return fruit;
	case 3: return grain;
	}
	return NULL;
}

void vegetable() {
	const char* vegetableName[] = { "celery", "cucumber", "potato" };
	for (size_t i = 0; i < sizeof(vegetableName) / sizeof(vegetableName[0]); i++) {
		printf("[%d] %s\n", i + 1, vegetableName[i]);
	}
}
void fruit() {
	const char* fruitName[] = { "grape", "kiwi", "strawberry", "banana", "orange" };
	for (size_t i = 0; i < sizeof(fruitName) / sizeof(fruitName[0]); i++) {
		printf("[%d] %s\n", i + 1, fruitName[i]);
	}
}
void grain() {
	const char* grainName[] = { "rice", "bean", "oats", "corn" };
	for (size_t i = 0; i < sizeof(grainName) / sizeof(grainName[0]); i++) {
		printf("[%d] %s\n", i + 1, grainName[i]);
	}
}