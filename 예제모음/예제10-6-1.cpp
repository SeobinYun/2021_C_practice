//#ifdef, #else, #endif 지시자
(my.h) {
#define FINISH
//#define CONTINUE
}

#include <stdio.h>
#include "my.h"
#ifdef FINISH
	int sleepinghours = 7;
	#define MSG "고생했어요~"
#else
	#ifdef CONTINUE
		int sleepinghours = 4;
		#define MSG "열프~ 즐프~"
	#else
		int sleepinghours = 0;
		#define MSG "날새 보아요~"
	#endif
#endif 

		int main(void) {
			printf("%s\n", MSG);
			printf("오늘의 수면시간은 %d시간 입니다.\n", sleepinghours);
			return 0;
		}