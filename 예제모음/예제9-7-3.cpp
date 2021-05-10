//실행파일 abc.exe를 생성하기 위한 세번째 모듈 c.c
int i = 10;
int next() {
	return (i += 1);
}
int last() {
	return (i -= 1);
}
int now(int i) {
	static int j = 5;
	return (i = j += i);
}