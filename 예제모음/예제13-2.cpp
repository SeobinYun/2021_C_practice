// ���� ����� ����
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
	Person ary[5] = { {"ȫ���", 500, 175.3},{"�̼���", 350, 179.5},{"������",25,175.5}, {"ȫ�¿�",25, 175.3},{"�̱��",46,165.5} };
	Person temp;
	size = sizeof(ary) / sizeof(ary[0]);

	fp = fopen("c:\\data\\ftest.txt", "wb");
	assert(fp != NULL); //���������� ����. ���μ��� �������� �Լ�
	for (int i = 0; i < size; i++) {
		fwrite(ary + i, sizeof(Person), 1, fp);
	}
	fclose(fp);

	fp = fopen("c:\\data\\ftest.txt", "rb");
	assert(fp != NULL);
	printf("[ 1����� ]\n");

	while (1) {
		res = fread(&temp, sizeof(Person), 1, fp);
		if (res != 1) {
			break;
		}
		printf("%s %d %.2lf\n", temp.name, temp.age, temp.height);
	}
	rewind(fp);

	printf("[ 2����� ]\n");
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