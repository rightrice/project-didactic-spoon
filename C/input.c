#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main ( int argc, char * argv [ ] ) {
	char letter = ' ';
	int number = 123;
	char string1[10];
	fscanf(stdin, "%d%c%9s", &letter, &number, string1);
	fprintf(stdout, "letter: %c, number %d\n", letter, number);
	
	//return 0;
	exit ( 0 );
}