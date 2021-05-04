/*	Created by Rhino
	Property of ASPECT*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* these are to be called upon
later as part of the game*/
void displayGame();
int makeChoice(int,int);
void checkGameWin();
/* The following voids are for text colors
and are made here for easy use throughout the code*/
void blue() {
	printf("\033[0;36m");
}
void green() {
	printf("\033[0;32m");
}
void purple() {
	printf("\033[0;35m");
}
void colorReset() {
	printf("\033[0m");
}

char board [8], whoWon = ' ';
int moveMaker = 0;


int main() {
    int i, spot;
	system("cls");
	blue();
	printf("\n\n\n");
	printf("   +----------------------------------------------------------+\n");
	printf("   | Instructions:                                            |\n");
	printf("   |                                                          |\n");
	printf("   | First, give yourself a name, once you have typed         |\n");
	printf("   | your name confirm your choice by pressing                |\n");
	printf("   | the 'return', or 'enter' key on your keyboard.           |\n");
	printf("   +----------------------------------------------------------+\n");
	printf("   | Next, you will be prompted to select a number 1-9,       |\n");
	printf("   | do so, followed by pressing the 'return', or 'enter' key |\n");
	printf("   +----------------------------------------------------------+\n\n");
	printf("   Welcome...\n");
	printf("   Player One, please give yourself a name: ");
	char name [20];
	fscanf(stdin, "%20s", name);
	colorReset();
	printf("   +--------------------------------------+ \n");
	purple();
	printf("   Player Two, please give yourself a name: ");
	char nameTwo [20];
	fscanf(stdin, "%20s", nameTwo);
	colorReset();
    for(i = 0; i < 9; i++) board[ i ] = ' ';
	displayGame();
    while(whoWon == ' ') {
       printf("\n%c\n", whoWon);
       if(moveMaker == 0 || moveMaker == 1) {
		  printf("\033[0;35m");
		  fprintf(stdout,"\n   %s,\n", name);
          printf("   Select an availabe spot 1 - 9:  ");
		  printf("\033[0m");
          scanf("%d", &spot);   
          if(makeChoice(spot, moveMaker) == 1)  {
             moveMaker = 1;
          } else {
             moveMaker = 2;
          }
       } else {
		  printf("\033[0;35m");
          printf("\n   %s,\n", nameTwo);
          printf("   Select an available spot 1 - 9:  ");
		  printf("\033[0m");
          scanf("%d", &spot);   
          if(makeChoice(spot, moveMaker) == 1)  {
             moveMaker = 2;
          } else {
             moveMaker = 1;
          }
       } 
       displayGame();
       checkGameWin(name, nameTwo);
	}
	return(032021);
};

void displayGame() {
	 time_t now = time(&now);
	 if (now == -1) {
        puts("The time() annot compute casue I messed something up");
    }        
    struct tm *est = gmtime(&now);    
    if (est == NULL) {        
        puts("The gmtime() cannot compute casue I messed something up");
    }
     system("cls");
	 printf("\033[0;35m");
	 printf("\t\n");
	 printf("   Two Player Tic-Tac-Toe v.0.2.1\n\n");
	 colorReset();
	 green();
	 printf("   Created By Alan Specchio Jr,\n   in association with [ ASPECT ]\n\n");
	 colorReset();
	 purple();
	 printf("   Game Server Time: %s", asctime(est));
	 printf("\033[0m");
	 printf("\033[0;32m");
	 printf("\n");
	 printf("\n");
	 printf("\n");
	 printf("\t    +   +\n");
     printf("\t  %c | %c | %c\n", board[0], board[1], board[2]);
     printf("\t+---|---|---+\n");
     printf("\t  %c | %c | %c\n", board[3], board[4], board[5]);
     printf("\t+---|---|---+\n");
     printf("\t  %c | %c | %c\n", board[6], board[7], board[8]);
	 printf("\t    +   +");
	 printf("\033[0m");
};

int makeChoice(int square, int player) {
     if((player == 0 || player == 1) && board[square-1] == ' ') {
         board[ square-1 ] = 'X';
         return 0;
     }
     else if(board[square-1] == ' ' && player == 2) {
          board[square-1] = 'O';
          return 0;
     } else 
       return (69);       
}

void checkGameWin(char *name, char *nameTwo) {
     int i, 
     contor = 0;
    if(board[ 0 ] == 'X' && board[ 1 ] == 'X' && board[ 2 ] == 'X') {
        whoWon = 'X';
     } else if(board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {
        whoWon = 'X';
     } else if(board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {
        whoWon = 'X';
     } else if(board[0] == 'X' && board[3] == 'X' && board[6] == 'X') {
        whoWon = 'X';
     } else if(board[1] == 'X' && board[4] == 'X' && board[7] == 'X') {
        whoWon = 'X';
     } else if(board[2] == 'X' && board[5] == 'X' && board[8] == 'X') {
        whoWon = 'X';
	 } else
	if(board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
        whoWon = 'O';
     } else if(board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
        whoWon = 'O';
     } else if(board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
        whoWon = 'O';
     } else if(board[0] == 'O' && board[3] == 'O' && board[6] == 'O') {
        whoWon = 'O';
     } else if(board[1] == 'O' && board[4] == 'O' && board[7] == 'O') {
        whoWon = 'O';
     } else if(board[2] == 'O' && board[5] == 'O' && board[8] == 'O') {
        whoWon = 'O';
    }
 
 if(board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
        whoWon = 'X';
     } else if(board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
        whoWon = 'X';
     }
     if(board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
        whoWon = 'O';
     } else if(board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
        whoWon = 'O';
     }
     if(whoWon == 'X') {
		purple();
		printf("\n");
		printf("\n   +--------------------------+\n");
        printf("   %s has won the game!\n", name);
		printf("   +--------------------------+\n");
		colorReset();
        return; 
     }
     if(whoWon == 'O') {
		purple();
		printf("\n");
		printf("\n   +--------------------------+\n");
        printf("   %s has won the game!\n", nameTwo);
		printf("   +--------------------------+\n");
		colorReset();
        return; 
     }
     for(i = 0; i < 9; i++) 
         if(board[i] != ' ') 
               contor++; 
     if(contor == 9) {
		purple();
        whoWon = 'C';
		printf("\n");
		printf("\n   +---------------------+\n");
        printf("   Nobody has won the game\n");
		printf("   +---------------------+\n");
		colorReset();
        return;
     } 
}