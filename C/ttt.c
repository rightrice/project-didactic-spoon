#include <stdio.h>
#include <stdlib.h>

char board[9] = {'0','1','2','3','4','5','6','7','8'};
char board2[3][3] = { '0','1','2','3','4','5','6','7','8' };

enum piece {Empty,A,S};
enum board {zero, one, two, three, four, five, six, seven, eight};

int main(int argc, char * argv[ ]) {

		int num = 0;
		while (num <= 5) {

			printf("  %c | %c | %c\n", board[0], board[1], board[2]);
			printf(" ___|___|___\n");
			printf("  %c | %c | %c\n", board[3], board[4], board[5]);
			printf(" ___|___|___\n");
			printf("  %c | %c | %c\n", board[6], board[7], board[8]);
			printf("\n");
			
			

			int play1Choice;
			printf("Alan, type a number where you want to place an A: ");
			scanf("%d", &play1Choice);
			printf("\n");
			while (board[play1Choice] == 'S') {
				printf("Lmao good one, try another number: ");
				scanf("%d", &play1Choice);
				printf("\n");
			};
			board[play1Choice] = 'A';
			int something = play1Choice;
			int whatever = play1Choice;
			something = something / 3;
			whatever = whatever % 3;
			board2[something][whatever] = 'A';


			printf("  %c | %c | %c\n", board2[0][0], board2[0][1], board2[0][2]);
			printf(" ___|___|___\n");;
			printf("  %c | %c | %c\n", board2[1][0], board2[1][1], board2[1][2]);
			printf(" ___|___|___\n");
			printf("  %c | %c | %c\n", board2[2][0], board2[2][1], board2[2][2]);
			printf("\n");
			
			
			num++;

			if (board[0] == board[1] && board[1] == board[2]) {
				printf("Alan has won the game!\n");
				return 0;
			};
			if (board[3] == board[4] && board[4] == board[5]) {
				printf("Alan has won the game!\n");
				return 0;
			};
			if (board[6] == board[7] && board[7] == board[8]) {
				printf("Alan has won the game!\n");
				return 0;
			};
			if (board[0] == board[3] && board[3] == board[6]) {
				printf("Alan has won the game!\n");
				return 0;
			};
			if (board[1] == board[4] && board[4] == board[7]) {
				printf("Alan has won the game!\n");
			};
			if (board[2] == board[5] && board[5] == board[8]) {
				printf("Alan has won the game!\n");
				return 0;
			};
			if (board[0] == board[4] && board[4] == board[8]) {
				printf("Alan has won the game!\n");
				return 0;
			};
			if (board[2] == board[4] && board[4] == board[6]) {
				printf("Alan has won the game!\n");
				return 0;
			};
			if (num == 5) {
				printf("The game is a draw");
				return 0;
			};

			int play2Choice;
			printf("Player 2 type a number where you want to place an S: ");
			scanf("%d", &play2Choice);
			printf("\n");
			while (board[play2Choice] == 'A') {
				printf("That spot is already taken, enter another number: ");
				scanf("%d", &play2Choice);
				printf("\n");
			};
			board[play2Choice] = 'S';
			int here = play2Choice;
			int barry = play2Choice;
			here = here / 3;
			barry = barry % 3;
			board2[here][barry] = 'S';
			
			if (board[0] == board[1] && board[1] == board[2]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};
			if (board[3] == board[4] && board[4] == board[5]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};
			if (board[6] == board[7] && board[7] == board[8]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};
			if (board[0] == board[3] && board[3] == board[6]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};
			if (board[1] == board[4] && board[4] == board[7]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};
			if (board[2] == board[5] && board[5] == board[8]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};
			if (board[0] == board[4] && board[4] == board[8]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};
			if (board[2] == board[4] && board[4] == board[6]) {
				printf("Player 2 has won the game!\n");
				return 0;
			};

		};

	return 0;
}
