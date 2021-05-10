// 구조체 변수 전달
#include <stdio.h>
struct _score {
	char name[20];
	int kor;
	int eng;
	int mat;
};
typedef struct _score Score; // 형명재지정
void struct_prn(Score);

int main(void) {
	Score sd = { "Hong Gil Dong", 80, 90, 100 };
	struct_prn(sd);
	return 0;
}

void struct_prn(Score x) {
	printf("%s : %d %d %d\n", x.name, x.kor, x.eng, x.mat);
}