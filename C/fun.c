#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int index = 3;

int fun( );

int main( int argc, char * argv [ ] ) {
		int ray[ 3 ];
		ray[0] = 2;
		ray[1] = 3;
		ray[2] = 7;
		printf("ray[0]: %d, ray[1]: %d, ray[2]: %d\n", ray[0], ray[1], ray[2]);
		int after = fun( 20 );
		printf("at: %d years old\n", after);
		Sleep ( 1000 );
		printf( ".\n");
		Sleep ( 100 );
		printf( "..\n");
		Sleep ( 100 );
		printf( "...\n");
		Sleep ( 2100 );
		printf( "Now you are also old...lame\n");
		return 21;
}

int fun( int before ) { printf("Having fun "); 
return before + 1;
}

