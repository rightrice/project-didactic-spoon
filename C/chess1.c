#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <iostream>

enum color {MangoOrange, DarkGrey };
enum pieceName {pawn, rook, bishop, knight, queen, king};
int pieceValue[6];



typedef int Integer; 
typedef enum pieceName Piece;
typedef enum color Color;

struct board {
	Color color;
	Piece pieceName;
};

typedef struct board Board;

int main( int argc, char * argv[ ] ) {
	pieceValue[pawn] = 1;
	pieceValue[rook] = 5;
	pieceValue[queen] = 9;
	pieceValue[knight] = 3;
	pieceValue[bishop] = 3;
	pieceValue[king] = 10;
	
	printf("knight is worth %d something\n", knight);
	struct board aBoard;
	aBoard.color = MangoOrange;
	aBoard.pieceName = knight;

	exit ( 0 );
}