// Intro for program

#include "periodic-header.h"

void introMenu(){
	system("cls");
	yellow();
	printf("\n\n");
	printf("\t\t   Welcome...\n");
	Sleep ( 300 );
	printf("\t\t   Please enter your name: ");	
	char userName [20];
	fscanf(stdin, "%20s", userName);
	Sleep ( 1300 );
	colorReset();
}