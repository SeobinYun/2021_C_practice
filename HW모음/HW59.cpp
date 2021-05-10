//메모리 할당을 어떻게 해야하는지 모르겠어요 ㅠ...
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main(void) {
	int n = 0;
	int number = 1;
	//int ary[2][2] = { {0,} };
	//int (*ptr)[2];
	//ptr = ary;
	while (1) {
		printf("배열의 행의 크기와 열의 크기인 N을 입력해주세요. : ");
		scanf("%d", &n);
		if (n >= 1 && n <= 10) {
			break;
			getchar();
		}
	}
	/*ptr = (int**)realloc(ptr, (n+2) * sizeof(int[4]));*/

	//int ary[n][n];
		switch (n) {
		case 1:
			int ary[1][1] = { {0,}, };
			//goto LB1;
			break;
		case 2:
			int ary[2][2] = { {0,}, };
			//goto LB2;
			break;
		case 3:
			int ary[3][3] = { {0,}, };
			//goto LB3;
			break;
		case 4:
			int ary[4][4] = { {0,}, };
			//goto LB4;
			break;
		case 5:
			//goto LB5;
			int ary[5][5] = { {0,}, };
			break;
		case 6:
			int ary[6][6] = { {0,}, };
			//goto LB6;
			break;
		case 7:
			//goto LB7;
			int ary[7][7] = { {0,}, };
			break;
		case 8:
			//goto LB8;
			int ary[8][8] = { {0,}, };
			break;
		case 9:
			//goto LB9;
			int ary[9][9] = { {0,}, };
			break;
		case 10:
			//goto LB10;
			int ary[10][10] = { {0,}, };
			break;
		default:
			;
		}
	//LB1: int ary[1][1] = { 0 };
	//LB2: int ary[2][2] = { {0,}, };
	//LB3: int ary[3][3] = { {0,}, };
	//LB4: int ary[4][4] = { {0,}, };
	//LB5: int ary[5][5] = { {0,}, };
	//LB6: int ary[6][6] = { {0,}, };
	//LB7: int ary[7][7] = { {0,}, };
	//LB8: int ary[8][8] = { {0,}, };
	//LB9: int ary[9][9] = { {0,}, };
	//LB10: int ary[10][10] = { {0,}, };
		while (n > 0) {
			for (int j = 0; j < n; j++) {
				ary[0][j] = number;
				number++;
			}
			for (int j = 0; j < n; j++) {
				ary[j][n - 1] = number;
				number++;
			}
			for (int j = n - 1; j >= 0; j--) {
				ary[n - 1][j] = number;
				number++;
			}
			for (int j = n - 1; j >= 0; j--) {
				ary[j][0] = number;
				number++;
			}
		}
	
	for (int i = 0; i < n; i++) {
		if (i % n == 0) {
			printf("\n");
		}
		printf("%d\t", ary[0][i]);
	}
	return 0;
}