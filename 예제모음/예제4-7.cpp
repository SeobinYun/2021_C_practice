#include <stdio.h> //���ڿ��� �Է�
#pragma warning(disable:4996)
////int main(void) { //���� �ִ� ���ڿ��� ������
//	char str[20], chr[20];
//	printf("input string(1) : ");
//	scanf("%s", str);
//	printf("input string(2) : ");
//	scanf("%s", chr);
//	printf("str : %s\n", str);
//	printf("chr : %s\n", chr);
//	return 0;
//}
#include <string.h>
int main(void) {
	char str[20], chr[20];
	printf("input string(1) : ");
	fgets(str, sizeof(str), stdin); //������� �Է¹ޱ� ���� fgets()���
	str[strlen(str) - 1] = '\0'; //fgets() ������ ���ܳ��� \n ����
	printf("input string(2) : ");
	fgets(chr, sizeof(chr), stdin); //������� �Է¹ޱ� ���� fgets()���
	chr[strlen(chr) - 1] = '\0'; //fgets() ������ ���ܳ��� \n ����
	printf("str : %s\n", str);
	printf("chr : %s\n", chr);
	return 0;
}
