#include <stdio.h> //정수를 반복적으로 입력 받아 누적하다가 0이 입력되면 입력을 중단하고 총 누적값을 출력하는 프로그램
#pragma warning(disable:4996)
int main(void) {
	int indata, sum = 0;
	scanf("%d", &indata);
	while (indata != 0) {
		sum = sum + indata;
		scanf("%d", &indata);
	}
	printf("%d", sum);
	return 0;
}

/*2번째 풀이
int indata, sum=0;
while(1){
	scanf("%d", &indata);
	if(indata==0){
		break;
	}
	sum+=indata;
}
printf("%d", sum);
return 0;
*/