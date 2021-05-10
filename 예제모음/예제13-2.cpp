// 파일 입출력 예제
#include <stdio.h>
#include <assert.h>
#pragma warning(disable:4996)
typedef struct _person {
	char name[10];
	int age;
	double height;
}Person;
int main(void) {
	FILE* fp;
	int res;
	int size;
	Person ary[5] = { {"홍길순", 500, 175.3},{"이순신", 350, 179.5},{"강감찬",25,175.5}, {"홍승연",25, 175.3},{"이길아",46,165.5} };
	Person temp;
	size = sizeof(ary) / sizeof(ary[0]);

	fp = fopen("c:\\data\\ftest.txt", "wb");
	assert(fp != NULL); //정상조건을 적음. 프로세스 강제종료 함수
	for (int i = 0; i < size; i++) {
		fwrite(ary + i, sizeof(Person), 1, fp);
	}
	fclose(fp);

	fp = fopen("c:\\data\\ftest.txt", "rb");
	assert(fp != NULL);
	printf("[ 1차출력 ]\n");

	while (1) {
		res = fread(&temp, sizeof(Person), 1, fp);
		if (res != 1) {
			break;
		}
		printf("%s %d %.2lf\n", temp.name, temp.age, temp.height);
	}
	rewind(fp);

	printf("[ 2차출력 ]\n");
	while (1) {
		res = fread(&temp, sizeof(Person), 1, fp);
		if (res != 1) {
			break;
		}
		printf("%s %d %.2lf\n", temp.name, temp.age, temp.height);
	}
	fclose(fp);
	return 0;
}