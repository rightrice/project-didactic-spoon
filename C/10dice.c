/* 
Code for demonstration. Ten rolls of the dice.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char * argv[ ] ) {
    srand( (unsigned)time( NULL ) );
    
    int die1;
    int die2;

    for( int roll = 1; roll <= 10; roll++ ) {
        die1 = rand( ) % 6 + 1;
        die2 = rand( ) % 6 + 1;
        printf( "roll: %d, first die: %d, second die %d\n", roll, die1, die2 );
    }
    
    exit( 0 );
}