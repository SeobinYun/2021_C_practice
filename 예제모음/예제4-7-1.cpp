#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int a = 0, b = 0, c = 0;
	char ch;
	printf("��, ��, �� ���� �Է� : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("�ݸ� �Է� (A~C) : ");
	ch = getchar(); 
	printf("���� : %d\n class�� : %c\n", a + b + c, ch);
	return 0;
}
//
//���� 80 90 75�� �Է��Ѵٸ�, %d���� stdin���� ���� ������������ ���� �ܿ��������� \n�� ó�������� �ʾұ� ������
//ch=getchar()�� stdin�� ���� \n�� ������ ����������.
//���� �ݸ��Է��� ��ȸ���� ���� ����ä ���۰� ����.
//��� �ܿ������͸� ó���ϱ� ���� scanf()�Լ� ������ myflush() �Լ��� �־��־�� ��.
//void myflush() {
//	char c;
//	while ((c = getchar()) != '\n') { 
//		;
//	}
//}
//�� �Լ� �߰��ؼ� ���ۺ���