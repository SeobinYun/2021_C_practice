//fgets(), fputs() ����
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
		if (fgets(tmp, sizeof(tmp), ifp) == NULL) { //�ܾ� �о���� ���� �� EOF ������ ��
			break;
		}
		printf("%s\n", tmp); //ȭ�鿡 ���
		fputs(tmp, ofp); //ofp ���Ͽ� ���
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}