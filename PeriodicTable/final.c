/*	 +-------------------+
	 |  Periodic Table   |
	 | Created by ASPECT |
	 +-------------------+
*/

#include "periodic-header.h"

void blue() {
	printf("\033[0;36m");
}
void lime() {
	printf("\033[1;32m");
}
void yellow() {
	printf("\033[1;33m");
}
void colorReset() {
	printf("\033[0m");
}



int main(char *userName) {
	int choice;
	loading();
	colorReset();	
	system("cls");
	table();
	printf("\n\n");

yellow();
printf("\t\t   Using the numbers on your keyboard,\n");
printf("\t\t   Please select an option:\n\n");
printf("\t\t   1) Examine element\n");
printf("\t\t   2) Input data for element\n");
printf("\t\t   3) Exit program\n");
	choose(&choice,3);
	switch(choice){
		case 1:{
		examineElement();
		break;
		}
		case 2:{printf("\t\t   Test 2\n"); 
//		addElement();
		break;
		}
		case 3:{
		Sleep ( 900 );
		system("cls");
		printf("\n\n\t\t   Thanks for stopping by\n");
		Sleep ( 300 );
		printf("\t\t   ... hope to see you again soon!\n");
		colorReset();
		exit(1);
		break;
		}
	default:{ 
		printf("\t\t   Sorry that is not a valid option"); 
		break;
		}
	}
colorReset();

}