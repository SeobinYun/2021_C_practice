// 구조체 변수의 시작주소 전달
#include <stdio.h>
typedef struct _score {
	char name[20];
	int kor;
	int eng;
	int mat;
}Score;
void struct_prn(Score*);
int main(void) {
	Score sd = { "Hong Gil Dong", 80, 90, 100 };
	struct_prn(&sd);
	return 0;
}

void struct_prn(Score* p) {
	printf("%s : %d %d %d\n", p->name, p->kor, p->eng, p->mat);
}