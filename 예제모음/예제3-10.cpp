#include <stdio.h>  //���� �ٸ� ���� ��Һ�
int main(void) {
	int x = -1;
	unsigned int y = 1;
	if (x >= y) {
		printf(" True\n");
	}
	else {
		printf(" False\n");
	}
	return 0;
}

/*��� ���� True�� �ֳ��ϸ� ���׿����� '>='�� ������ �ϴ� �������� 
signed int�� x�� �ִ��� ũ�Ⱑ ū unsigned int�� ����ȯ�ϸ鼭 1�� ������ x�� ��Ʈ �� ���밪 ��Ʈ�� s.b�� �ν����� �����鼭 
x�� ���� unsigned int���� �ִ��� 42�� ��¼��� �Ǵ���
�׷��� x>=y�� �������� True ���*/