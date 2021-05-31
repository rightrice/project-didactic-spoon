/*	 +------------------+
	 |  Periodic Table  |
	 | Created by Rhino |
	 +------------------+
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

struct element {
	char elementName[50];
	char sb[5];
	int atm;
	float atms;
	char block;
	char atc[20];
	char prop[250];
};

int main() {
	int choice;
	
	system("cls");
	yellow();
	printf("\n\n");
	printf("   Welcome...\n");
	Sleep ( 300 );
	printf("   Please enter your name: ");	
	char userName [20];
	fscanf(stdin, "%20s", userName);
	Sleep ( 1300 );
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
		case 3:{printf("\t\t   Test 3\n");
		system("cls");
		printf("\t\t   Thanks for stopping by %s,\n", userName);
		printf("\t\t   hope to see you again soon!\n");
		exit(1);
		break;
		}
		default: printf("\t\t   Sorry %s, that is not a valid option", userName); break;
	}
colorReset();
}