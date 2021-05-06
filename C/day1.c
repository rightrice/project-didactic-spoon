#include <stdio.h>

#define MODE debug

int main( int argc, char * argv[ ] ) {
   printf( "In Production\n" );
 #ifdef MODE
	printf( "In Debug" );
#endif
   return 0;
}

/*
f(x, y) = 2x+y <- definition of f(x, y)


f is the name of the function
x and y are the parameters of the function

*/