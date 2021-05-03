#include <stdio.h>
#include <stdlib.h>

struct buffer {
	unsigned char* octets;
	int size;
};

typedef struct buffer Buffer;

Buffer * stringToBuff( char *string ) {
	// Allocate a Buffer structure.

	// Compute the number of characters in given string without
	// using standard library functions.
	// Assign that value to the Buffer's size member.
	
	// Allocate the Buffer's octets member.
	// Copy the character values from the given string
	// to the Buffer's octets.
	
	// Return the Buffer.
}

unsigned char buffParity( Buffer * aBuff ) {
	// return the computed xor of aBuff->octets
}
	
int main( int argc, char *argv[ ] ) {
	Buffer *msg = stringToBuff( "The quick brown fox jumps over the lazy dog." );
	
	printf( "buffer size: %d\nmessage: ", msg->size );
	
	unsigned char *octIter = msg->octets;
	for( int position = 1; position <= msg->size; position++ ) {
		printf( "%c", *octIter );
		octIter++;
	}
}
	
	printf( "\nchecksum: %d", buffParity( msg ) );
	exit(0);