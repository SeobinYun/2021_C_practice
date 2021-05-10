//fscanf(), fprintf() ¿¹Á¦
#pragma warning(disable:4996)
#include <stdio.h>
int main(void) {
	FILE* ifp;
	FILE* ofp;
	int k = 0, e = 0, m = 0;
	ifp = fopen("c:\\data\\score.txt", "rt");
	if (ifp == NULL) {
		return 1;
	}
	ofp = fopen("c:\\data\\scoreRes.txt", "wt");
	if (ofp == NULL) {
		return 1;
	}
	while (1) {
		if (fscanf(ifp, "%d %d %d", &k, &e, &m) != 3) {
			break;
		}

		printf("ÃÑÁ¡ : %dÁ¡\n", k + e + m);
		fprintf(ofp, "ÃÑÁ¡ : %dÁ¡\n", k + e + m);
	}
	fclose(ifp);
	fclose(ofp);
	return 0;
}