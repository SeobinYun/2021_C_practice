//#ifdef, #else, #endif ������
(my.h) {
#define FINISH
//#define CONTINUE
}

#include <stdio.h>
#include "my.h"
#ifdef FINISH
	int sleepinghours = 7;
	#define MSG "����߾��~"
#else
	#ifdef CONTINUE
		int sleepinghours = 4;
		#define MSG "����~ ����~"
	#else
		int sleepinghours = 0;
		#define MSG "���� ���ƿ�~"
	#endif
#endif 

		int main(void) {
			printf("%s\n", MSG);
			printf("������ ����ð��� %d�ð� �Դϴ�.\n", sleepinghours);
			return 0;
		}