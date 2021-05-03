/* 
Single roll of two die.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char * argv[ ] ) {
    srand( (unsigned)time( NULL ) );
    
    int die1 = rand( ) % 6 + 1;
    int die2 = rand( ) % 6 + 1;
    printf( "first die: %d, second die %d\n", die1, die2 );
    
    exit( 0 );
}