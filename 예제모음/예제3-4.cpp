#include <stdio.h> //signed�� unsigned������ �����ϴ� ���� �ǹ�
int main(void) {
	short x;
	unsigned short y;
	int res1, res2;
	x = y = -1;
	res1 = x * 3;
	res2 = y * 3;
	printf("res1 = %d\n", res1);
	printf("res2 = %d\n", res2);
	return 0;
}

//���� ���������� x, y ������ ���� ����� ���´�� x�� signed ���� �����ͷ� �νĵǾ� ���Ǹ�,
//y�� unsigned���� �����ͷ� �νĵǾ� ���ȴ�.