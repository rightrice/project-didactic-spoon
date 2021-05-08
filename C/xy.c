#include <stdio.h>
#include <stdlib.h>

struct point {
	int x;
	int y;
};
typedef struct point Point

Point * intsToPoint ( int x, int y){
	Point * overThere = (Point*)malloc(sizeof (Point));
	overThere->x = x;
	overThere->y = y;
	return overThere;
}

int main(int argc, char *argv[]){
	Point * here = intsToPoint(10, 57);
	printf("here x: %d, here y: %d\n", here->x, here->y);
	
	exit (0);
}