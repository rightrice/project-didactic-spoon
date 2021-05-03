/* 
Code for demonstration. Composition of two die as pair.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pair {
    int die1;
    int die2;
};

int main( int argc, char * argv[ ] ) {
    srand( (unsigned)time( NULL ) );
    
    struct pair dice;
    for( int roll = 1; roll <= 10; roll++ ) {
        dice.die1 = rand( ) % 6 + 1;
        dice.die2 = rand( ) % 6 + 1;
        printf( "roll: %d, first die: %d, second die %d\n", roll, dice.die1, dice.die2 );
    }
    
    exit( 0 );
}