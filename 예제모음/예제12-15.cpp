// �������� ������ ��
#include <stdio.h>
enum Nation {
	KOREA,
	USA,
	JAPAN,
	CHINA
};
int main(void) {
	//������ ������ �����Ͽ� ����� ���� Ư¡
	enum Nation x; //Nation Ÿ���� x���� ������ �ϸ� x�������� ������ ���� �� ������ ������� ���尡����
	x = KOREA;
	printf("x=%d\n", x);
	//x=0; �����߻�
	
	//��ũ�� ��� ������� ����ϴ� ������
	printf("%d\n", KOREA); //#define KOREA (0)�� ȿ��
	printf("%d\n", USA); //#define USA (1)�� ȿ��
	printf("%d\n", JAPAN); //#define JAPAN (2)�� ȿ��
	printf("%d\n", CHINA); //#define CHINA (3)�� ȿ��
	return 0;
}