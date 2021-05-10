#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int inputCode(void);
int inputAmount(void);
double calc(int, int);
void output(int, int, double);
int main(void) {
	int code = 0, amount = 0;
	double result = 0;
	code = inputCode();
	amount = inputAmount();
	result = calc(code, amount);
	output(code, amount, result);
	return 0;
}
int inputCode() {
	int code = 0;
	printf("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
	scanf("%d", &code);
	switch (code) {
	case 1: return 1;
		break;
	case 2: return 2;
		break;
	case 3: return 3;
		break;
	default:
		;
	}
}
int inputAmount() {
	int amount = 0;
	printf("* 사용량을 입력하시오(ton단위) : ");
	scanf("%d", &amount);
	return amount;
}

double calc(int code, int amount) {
	double usage = 0;
	switch (code) {
	case 1:
		usage = (double)amount * 50.0;
		usage = usage + (usage * 0.05);
		return usage;
		break;
	case 2:
		usage = (double)amount * 45.0;
		usage = usage + (usage * 0.05);
		return usage;
		break;
	case 3:
		usage = (double)amount * 30.0;
		usage = usage + (usage * 0.05);
		return usage;
		break;
	default:
		;
	}
}
void output(int code, int amount, double price) {
	char mode[10] = { '\0' };
	switch (code) {
	case 1:
		strcpy(mode, "가정용");
		printf("\n# 사용자코드 : %d(%s)\n# 사용량 : %d ton\n# 총수도요금 : %.0f원\n", code, mode, amount, price);
		break;
	case 2:
		strcpy(mode, "상업용");
		printf("\n# 사용자코드 : %d(%s)\n# 사용량 : %d ton\n# 총수도요금 : %.0f원\n", code, mode, amount, price);
		break;
	case 3:
		strcpy(mode, "공업용");
		printf("\n# 사용자코드 : %d(%s)\n# 사용량 : %d ton\n# 총수도요금 : %.0f원\n", code, mode, amount, price);
		break;
	default:
		;
	}
}