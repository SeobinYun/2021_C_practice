#include <stdio.h>  //sprintf() �Լ��� Ȱ�� ��
#include <string.h>
int main(void) {
	char str[100];
	double pi = 3.141592;
	sprintf(str, "������ ���� %.2lf �Դϴ�.", pi);
	printf("%s\n",str);
	return 0;
}