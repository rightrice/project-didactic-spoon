// Examine Element

#include "periodic-header.h"

void examineElement(){
	int search;
	system("cls");
	table();
	yellow();
	printf("\n\n");
	printf("\t\t   Please choose an option to filter what elemt you are looking for.\n");
	printf("\t\t   1) Search by Element Name\n");
	printf("\t\t   2) Search by Element Symbol\n");
	printf("\t\t   3) Search by Atomic Weight\n");
	printf("\t\t   4) Search by Atomic Number\n");
	printf("\t\t   5) Elements of Diff. Blocks\n");
	printf("\t\t   6) Return to Main Menu\n\n");
	colorReset();
	yellow();
	choose(&search,6);
	switch(search){
		case 1:{
			printf("\t\t   Enter the name of an Element: ");
			break;
		}
		case 2:{
			printf("\t\t   Test 2");
			break;
		}
		case 3:{
			printf("\t\t   Test 2");
			break;
		}
		case 4:{
			printf("\t\t   Test 2");
			break;
		}
		case 5:{
			printf("\t\t   Test 2");
			break;
		}
		case 6:{
			printf("\t\t   Returning to Main Menu...");
			Sleep ( 1300 );
			main();
		}
		default: printf("\t\t   Sorry, that is not a valid option"); break;
	}
	colorReset();
}