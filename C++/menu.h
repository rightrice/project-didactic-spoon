/*	Created by Alan Specchio
	Property of ASPECT*/
	
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


void mainMenu();
int selectGame(int,int);

char selection[3], game = ' ';

int main() {
	system("cls");
	green();
	printf("\n");
	printf("\n");
	printf("   Welcome to the ASPECT CLI games library!\n   Please choose a game using the numbers followed by 'return' to confirm your selection.\n");
	printf("   +--------------------+-------------------+------------------------+\n");
	green();
	printf("   |'1' for Tic-Tac-Toe | '2' for Battleship...coming Soon | '3' for Chess...also coming soon |\n");
	printf("   +--------------------+-------------------+------------------------+\n");
	return(032021);
};

int selectGame(int game, int player) {
     if((player == 0 || player == 1) && selection[game-1] == ' ') {
         selection[ game-1 ] = '1';
         return 0;
     } else 
       return (1);       
}