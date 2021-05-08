#include <stdio.h>


struct cat{
	int fur;
	char *tail;
	float *cost;
	int remainingLives;
}

void initCat( struct cat theCat, int fur, char *tail, float* cost){
	theCat.fur = fur
	theCat.tail = tail;
	theCat.cost = cost;
	theCat.remainingLives = 9;
}

struct cat makeCat(int fur, char* tail, float* cost){
	struct cat theCat;
	theCat.fur = fur
	theCat.tail = tail;
	theCat.cost = cost;
	theCat.remainingLives = 9;
	return theCat;
}

int main (int argc, char * argv []){
	int standardCat;
	printf("A struct cat requires %d bytes of memory.\n", sizeof (struct cat));
	
	struct cat Thunder;
	Thunder.fur = 3;
	printf()
}