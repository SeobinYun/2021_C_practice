#include <stdio.h> //Escape Sequence ¿¹Á¦
#include <conio.h>
int main(void) {
	printf("Hello");
	printf("Hello\t");
	printf("Hello\n");	
	_getch();
	printf("Korea\r");	
	_getch();
	printf("C\n");	
	_getch();
	printf("King\b\b\b");	
	_getch();
	printf("ong\n");	
	_getch();
	printf("12345678123456781234567812345678\n"); 
	_getch();
	printf("1\t123\t12345\t1234567\n");		
	_getch();
	printf("\\, \", \n");	
	_getch();
	return 0;
}