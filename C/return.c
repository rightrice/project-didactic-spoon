#include <stdio.h>
#include <stdlib.h>

int index = 3;
void fun(  );
void fun(  ) { printf("Having fun\n"); }


int main( int argc, char * argv [ ] ) {
		fun(  );
		
        printf( "Howdy, we are making pasta. Input your ingredients.\n", argc );
        printf( "%d ingredients given\n", argc );

      char * ordinal [ ] = { "first", "Second", "Third" };
*/
        char * single;
        single = malloc( 3 );
        *single = 'x';
        single = single + 1;
        *single = 'y';
        single = single + 2;
        *single = '\0';

// "\0" means escape to null value

        printf("single is: %c\n", *single);
        printf("single is: %s\n", *single);


// printf("The first ingredient is %s\n", argv[0]);
// printf("The second  ingredient is %s\n", argv[1]);
// printf("The third ingredient is %s\n", argv[2]);

        int index = 0;
        while( index < argc ){
                printf( "The %s ingredient is %s\n", ordinal[index], argv[index]);
                printf("argument %d is %s\n", index, argv[index]);
                index = index + 1;
        }

        for(int index = 0; index < argc; index = index + 1) {
        printf( "The %s ingredient is %s\n", ordinal[index], argv[index]);
        printf("argument %d is %s\n", index, argv[index]);

        }

// printf(" print the fourth ingredient of %s\n", argv [3]);

        return 77;
}