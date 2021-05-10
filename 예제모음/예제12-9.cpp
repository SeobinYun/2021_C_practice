// 구조체 배열의 전달
#include <stdio.h>
typedef struct {
	char name[20];
	int kor;
	int eng;
	int mat;
}Score;
void struct_prn(Score*);
int main(void) {
	Score ary[2] = { {"Hong Gil Dong", 80,90,100},{"Lee Mong Yong", 75,85,95} };
	struct_prn(ary);
	return 0;
}

void struct_prn(Score* p) {
	for (int i = 0; i < 2; i++) {
		printf("%s : %d %d %d\n", p[i].name, p[i].kor, (p+i)->eng, (p+i)->mat);
	}
}