#include <stdio.h>

enum square { Empty, MangoOrange, DarkGrey, MangoOrangeKing, DarkGreyKing };

int main (int argc, char * argv[ ]) {
	enum square board1D[64];
	enum square board2D[8][8];
	enum square board3D[3][8][8]
	
	printf("board2D: %p\n", board2D);
	printf("board2D[0][0]: %p\n", &board2D[0][0]);
	printf("board2D[0][1]: %p\n", &board2D[0][1]);
	printf("board2D[0][2]: %p\n", &board2D[0][2]);
	printf("board2D[1][0]: %p\n", &board2D[1][0]);
	printf("board2D[1][1]: %p\n", &board2D[1][1]);
	printf("board2D[1][2]: %p\n", &board2D[7][7]);
	return 0;
}