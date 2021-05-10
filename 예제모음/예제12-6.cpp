//구조체 각 멤버의 전달
#include <stdio.h>
typedef struct _score {
	char name[20];
	int kor;
	int eng;
	int mat;
}Score;
void struct_prn(char*, int, int, int);
int main(void) {
	Score sd = { "Hong gil dong", 80, 90, 100 };
	struct_prn(sd.name, sd.kor, sd.eng, sd.mat);
	return 0;
}
void struct_prn(char* cp, int k, int e, int m) {
	printf("%s : %d %d %d\n", cp, k, e, m);
}