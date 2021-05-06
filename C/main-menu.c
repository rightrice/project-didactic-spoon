/*	Created by Alan Specchio
	Property of ASPECT*/
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void mainMenu();
int selectGame(int,int);
void green() {
	printf("\033[0;32m");
}
void purple() {
	printf("\033[0;35m");
}
void colorReset() {
	printf("\033[0m");
}

char selection[3], game = ' ';

int main() {
	system("cls");
	green();
	printf("\n");
	printf("\n");
	printf("   Welcome to the ASPECT CLI games library!\n   Please choose a game using the numbers followed by 'return' to confirm your selection.\n");
	colorReset();
	purple();
	printf("   +--------------------+-------------------+------------------------+\n");
	colorReset();
	green();
	printf("   |'1' for Tic-Tac-Toe | '2' for something | '3' for something else |\n");
	colorReset();
	purple();
	printf("   +--------------------+-------------------+------------------------+\n");
	colorReset();
	return(032021);
};

int selectGame(int game, int player) {
     if((player == 0 || player == 1) && selection[game-1] == ' ') {
         selection[ game-1 ] = '1';
         return 0;
     } else 
       return (1);       
}

