#include <stdio.h> //1�� ���� ������ ����
int main() {
	short num = 0x0f0f, res;
	res = ~num;
	printf(" num = %#hx res = %#hx\n", num, res); //0xf0f 0xf0f0
	return 0;

}

// %x�� ����ϸ�
// 0xf0f 0xfffff0f0(�޸� Ȯ���...)
