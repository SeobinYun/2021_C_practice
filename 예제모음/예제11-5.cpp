//char �迭�� char ������
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main(void) {
	const char* p = "C program";
	char str[20] = "C program";

	//���ڿ� ���� ���� ���θ� �Ǵ��غ�����.
	//p[0] = 'B'; //compile error
	str[0] = 'B'; //����
	printf("p : %s\n", p);
	printf("str : %s\n", str);

	//strcpy(p, "Java"); //Runtime error or compile error
	strcpy(str, "Java");

	printf("p : %s\n", p);
	printf("str : %s\n", str);
	
	p = "Python programming";
	//str = "Python programming"; //compile error

	printf("p : %s\n", p);
	printf("str : %s\n", str);
	return 0;
}