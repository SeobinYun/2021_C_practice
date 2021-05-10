#include <stdio.h>
#pragma warning(disable:4996)
int main(void) {
	int his, lit, fun;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &fun);
	printf("총점은 %d 이고 평균은 %.2lf 입니다.\n", his + lit + fun, ((double)(his + lit + fun) / 3));
	return 0;
}