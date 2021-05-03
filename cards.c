#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void showRandy( void ) {
	int randy = rand( );
	printf( "randy: %d\n", randy );
}	

int maxRandom( int dividend ) {
	return rand( ) % dividend;
	
}

int rangeRandom( int lower, int upper ) {
	rand( );
	return ;
}

int main( int argc, char * argv[ ] ) {
	srand( time( NULL ) );
	
	showRandy( );
	showRandy( );
	
	printf( "max randy: %d\n", RAND_MAX );
	printf( "percent randy: %d\n", maxRandom( 100 ) );
	printf( "percent randy: %d\n", maxRandom( 1000 ) );
	
	exit( 0 );
}