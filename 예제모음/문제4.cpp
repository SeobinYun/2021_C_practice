#include <stdio.h>
int main(void) {
	int i, j;
	for (i = 5; i>0 ; i--) {
		for ( j = i; j >0; j--) {
			printf("%3d", j);
		}
		printf("\n");
	}
	return 0;
}