//�̸� ���ǵ� ��ũ��
#include <stdio.h>
void sub();
int main(void) {
	printf("���ϸ� : %s\n", __FILE__);
	printf("���೯¥ : %s\n", __DATE__);
	printf("����ð� : %s\n", __TIME__);
	printf("���� ���� ��ȣ : %d\n", __LINE__);
	sub();
	return 0;
}
void sub() {
	printf("���� ���� ��ȣ : %d\n", __LINE__);
}