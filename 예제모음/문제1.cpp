#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int n = 0;
	int res;
	while (1) {
		printf("��� �Է� : ");
		res=scanf("%d", &n); //res : ���� �Է½� 1 / �����Է½� 0 / EOF�Է½� -1
		if (res!=1) { //���� �Է��� �ȵǾ��� ��
			break;
		}
		if(n>=0){
			for (int i = 0; i < n; i++) {
				printf("*");
			}
			printf("\n");
		}
		else {
			printf("������ �ԷµǾ����ϴ�.\n");
		}
	}
	return 0;
}