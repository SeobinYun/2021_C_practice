#include <stdio.h> //������ �ݺ������� �Է� �޾� �����ϴٰ� 0�� �ԷµǸ� �Է��� �ߴ��ϰ� �� �������� ����ϴ� ���α׷�
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

/*2��° Ǯ��
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