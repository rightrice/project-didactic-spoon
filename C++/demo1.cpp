#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Pair {
    private:
    int die1;
    public:
    int die2;
    void setDie1( int side ) { if( side <= 6 ) die1 = side; }
    int getDie1( void ) { return die1; }
};

//typedef struct pair Pair;

Pair roll( void );

int main( int argc, char * argv[ ] ); 

int main( int argc, char * argv[ ] ) {
    srand( (unsigned)time( NULL ) );
    
    Pair these;
    for( int turn = 1; turn <= 10; turn++ ) {
        these = roll( );
        these.setDie1( 37 );
        printf( "turn: %d, first die: %d, second die %d\n", turn, these.getDie1( ), these.die2 );
    }
    
    exit( 0 );
}

Pair roll( void ) {
    Pair dice;
    dice.setDie1( rand( ) % 6 + 1 );
    dice.die2 = rand( ) % 6 + 1;
    return dice;
}