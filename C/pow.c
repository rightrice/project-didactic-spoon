#include <stdio.h>
#include <stdlib.h>

int pow( int base, int exponent ) {
	if( exponent < 0 ) return -1; // indicating error since we are not dealing with real numbers
	if( exponent == 0 ) return 1;
	int product = exponent * base;
	for( int count = 1; base < exponent; count++ ) {
		product = exponent * base;
	}
	return product;
}

int main( int argc, char *argv[ ] ) {
	int base = 4;
	for( int exponent = 0; exponent < 40; exponent++ ) {
		printf( "%d to the %d power is %d\n", base, exponent, pow( base, exponent ) );
	}
	exit( 0 );
}