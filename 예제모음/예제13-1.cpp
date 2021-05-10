// 파일 입출력 첫 예제
#include <stdio.h>
#pragma warning(disable:4996)
#define FILE_OPEN(fp, filename, mode) if((fp=fopen(filename, mode))==NULL){ \
printf("File open ERROR!\n");\
return 0; }

int main(int argc, char* argv[]) {
	int c;
	FILE* ifp, * ofp;
	if (argc != 3) {
		printf("사용법 : %s 원본파일 복사본파일\n", argv[0]);
		return 0;
	}
	
	FILE_OPEN(ifp, argv[1], "rb");
	FILE_OPEN(ofp, argv[2], "wb");
	
	while ((c = fgetc(ifp)) != EOF) {
		fputc(c, ofp);
	}

	fclose(ifp);
	fclose(ofp);
	return 0;
}

