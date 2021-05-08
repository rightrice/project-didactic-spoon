#include <stdio.h>

enum season { spring, summer, fall, winter };
typedef enum season Season; 


int main ( int argc, char * argv[ ] ) {
//	enum season current;
	Season current;
	current = winter;
	for( int now = spring; now <= winter; now++ ) {
		if ( now == spring ) printf( "spring swims\n");
		if ( now == summer ) printf( "jetskis bitches\n");
		if ( now == fall ) printf( "pumpkin lattes\n");
		if ( now == winter ) printf( "polar plunges\n");
		printf( "drink iced claws\n" );
	}


	exit ( 0 );
}