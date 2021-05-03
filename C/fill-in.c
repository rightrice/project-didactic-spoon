/* 
Code for demonstration. Initializing Random Number Generator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bringRand( void ) {
	int randy = rand( );
	printf( "not predictable: %d\n", randy );
}


int main( int argc, char * argv[ ] ) {
    srand( (unsigned)time( NULL ) );
	
	bringRand( );
	
    exit( 0 );
}