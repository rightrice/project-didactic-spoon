#include <stdio.h>
#include <stdlib.h>

void blue() {
	printf("\033[0;36m");
}
void colorReset() {
	printf("\033[0m");
}

struct point {
	int x;
	int y;
};

typedef struct point Point;

Point * intsToPoint ( int x, int y){
	Point * overThere = (Point*)malloc(sizeof (Point));
	overThere->x = x;
	overThere->y = y;
	return overThere;
}

int main(int argc, char *argv[]){
	Point * here = intsToPoint(10, 57);
	system("cls");
	blue();
	printf("\n\n\n");
	printf("\tYour spawn point in Celestial is (%d,%d), otherwise know as the cryptic marshland.\n", here->x, here->y);
	printf("\tHave Fun!\n\n\n");
	colorReset();
	
	exit (0);
}