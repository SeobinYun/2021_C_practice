#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int a, b, res;
	char str[10];
	res = scanf("%d %d", &a, &b); //10 2#b �� �Է����� �� //'#b\n'�� �ܿ������ͷ� ����.
	scanf("%s", str); //stdin�� �ܿ������͸� ����� �ʾ��༭ 2��° scanf()�� �Է±�ȸ���� �־����� ����   
	printf("%d\n", a); //10
	printf("%d\n", b); //2
	printf("%s\n", str); //#b
	return 0;
}

//���� res=scanf()�ڿ� myflush()�Լ� �����.