#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int his, lit, fun;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &fun);
	printf("������ %d �̰� ����� %.2lf �Դϴ�.\n", his + lit + fun, ((double)(his + lit + fun) / 3));
	return 0;
}