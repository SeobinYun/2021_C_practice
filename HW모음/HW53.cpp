#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int input(char*);
int calc(char*);
void output(char*, int);
int main(void) {
	char str[100] = { '\0', };
	char ori[100] = { '\0', };
	int num[100] = { 0, };
	int res = 0, sum = 0;
	while (1) {
		res = input(str);
		strcpy(ori, str);
		if (res != 0) {
			break;
		}
		else {
			;
		}
		sum = calc(str);
		output(ori, sum);
	}
	return 0;
}
int input(char* str) {
	int res = 0;
	while (1) {
		printf("# 문장을 입력하시오 : ");
		res = scanf("%s", str);
		//printf("%s\n", str);
		if (strcmp(str, "end")==0) {
			return -1;
			break;
		}
		else if(res==1) {
			getchar();
			break;
		}
		else { ; }
		getchar();
	}
	return 0;
}
int calc(char* str) {
	int sum = 0;
	char n = '\0';
	char* ptr = &n;
	int len = 0;
	len = strlen(str);
	for (unsigned int i = 0; i < len; i++) {
		//if (str[i] >= '0' && str[i] <= '9') {
		//	sum = str[i] - '0';
		//	for (int j = i + 1; j < len; j++) {
		//		if (str[j] >= '0' && str[j] <= '9') {
		//			str[j] = str[j] - '0';
		//			//sum = (sum * 10) + (str[j]);
		//			sum *= 10;
		//			sum += str[j];
		//		}
		//		else {
		//			break;
		//		}
		//		//sum += str[i];
		//	}
		////	sum += str[i];
		//}

		if (str[i] >= '0' && str[i] <= '9') {
			n = str[i];
			str[i] = atoi(ptr);
			sum += str[i];
		//	for (int j = i+1; j < strlen(str); j++) {
				if (str[i+1] >= '0' && str[i+1] <= '9') {
					sum = (sum * 10) + (atoi(ptr + 1));
					//sum *= 10;
				}
				else {
					;
				}
				//sum += str[i];
		//	}
		}
		else { ; }
	}

	//for (unsigned int i = 0; i < strlen(str); i++) {
	//	printf("%d\t", str[i]);
	//}
	return sum;
}


void output(char* str, int sum) {
	printf("　\"%s\" 내의 총 숫자는 [%d]입니다.\n\n", str, sum);
}