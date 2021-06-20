// Loading Screen

#include "periodic-header.h"

void loading(){		
	system("cls");
	yellow();
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t [ ASPECT ]\n");
	colorReset();
	blue();
	Sleep ( 10000 );
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t Loading...\n");
	Sleep ( 900 );
	colorReset();
	yellow();
	system("cls");
	printf("\n\n");
	printf("\t\t   Welcome...\n");
	Sleep ( 300 );
	printf("\t\t   Please enter your name: ");	
	char userName [20];
	fscanf(stdin, "%20s", userName);
	Sleep ( 1300 );
}