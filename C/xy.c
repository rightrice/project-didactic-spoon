#include <stdio.h>
#include <stdlib.h>

void blue() {
	printf("\033[0;36m");
}
void yellow() {
	printf("\033[1;33m");
}
void colorReset() {
	printf("\033[0m");
}

struct point {
	float x;
	float y;
};

typedef struct point Point;

Point * intsToPoint ( float x, float y){
	Point * overThere = (Point*)malloc(sizeof (Point));
	overThere->x = x;
	overThere->y = y;
	return overThere;
}

int main(float argc, char *argv[]){
	Point * here = intsToPoint( 16492.78, 573792.91);
	system("cls");
	blue();
	printf("\n\n\n");
	printf("\tYour spawn point in Cosmos is (%f,%f),\n\totherwise know as the cryptic marshland.\n", here->x, here->y);
	colorReset();
	yellow();
	printf("\n\tHave Fun!\n\n\n");
	colorReset();
	
	exit (0);
}