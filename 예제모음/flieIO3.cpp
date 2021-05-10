//fgets(), fputs() 예제
#pragma warning(disable:4996)
#include <stdio.h>
int main(void) {
	char tmp[100];
	FILE* ifp;
	FILE* ofp;
	ifp = fopen("c:\\data\\test1.txt", "rt");
	if (ifp == NULL) {
		return 1;
	}
	ofp = fopen("c:\\data\\res2.txt", "wt");
	if (ofp == NULL) {
		return 1;
	}
	while (1) {
		if (fgets(tmp, sizeof(tmp), ifp) == NULL) { //단어 읽어오다 파일 끝 EOF 만났을 때
			break;
		}
		printf("%s\n", tmp); //화면에 출력
		fputs(tmp, ofp); //ofp 파일에 출력
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}