// �Լ������� Ÿ���� ������
#include <stdio.h>
void sub1(void);
void sub2(void);
void sub3(void);
int main(void) {
	typedef void (*func_t)(void); /*�Լ������� ������ Ÿ�� ������
								  typedef void(*)(void) func_t; -> error �߻��ϴ� Ÿ�� ������ ǥ��
								  typedef Ű����� �������� �ڷ����� ���������� _t���̻縦 ���´�*/
	func_t* fptr;
	func_t funAry[3] = { sub1, sub2, sub3 };
	fptr = funAry;
	for (int i = 0; i < 3; i++) {
		fptr[i]();
		funAry[i]();
		printf("\n");
	}
	return 0;
}

void sub1() {
	printf("���� sub1()�Լ�~~\n");
}

void sub2() {
	printf("���� sub2()�Լ�~~\n");
}

void sub3() {
	printf("���� sub3()�Լ�~~\n");
}