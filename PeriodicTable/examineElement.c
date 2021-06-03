// Examine Element

#include "periodic-header.h"

void examineElement(){
	int search;
	system("cls");
	table();
	yellow();
	printf("\n\n");
	printf("\t\t   Please choose an option to filter for what element(s) you are looking for.\n");
	printf("\t\t   1) Search by Element Name\n");
	printf("\t\t   2) Search by Element Symbol\n");
	printf("\t\t   3) Search by Atomic Weight\n");
	printf("\t\t   4) Search by Atomic Number\n");
	printf("\t\t   5) Restart and Return to Main Menu\n\n");
	colorReset();
	yellow();
	choose(&search,5);
	switch(search){
		case 1:{
			printf("\t\t   Enter the name of an element: ");
			break;
		}
		case 2:{
			printf("\t\t   Enter the symbol of an element: ");
			break;
		}
		case 3:{
			printf("\t\t   Enter the desired atomic weight: ");
			break;
		}
		case 4:{
			printf("\t\t   Enter the desired atomic number");
			break;
		}
		case 5:{
			system("cls");
			printf("\n\n\t\t   Returning to Main Menu...");
			Sleep ( 1300 );
			main();
		}
		default: printf("\t\t   Sorry, that is not a valid option"); break;
	}
	colorReset();
}