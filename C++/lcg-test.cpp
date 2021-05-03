#include <iostream>
#include "LCG.hpp"

int LCG( void ) {
    LCG randy;
    std:: cout << randy.next( ) << std::endl;
    std:: cout << randy.next( 1, 10, true ) << std::endl;
} 
