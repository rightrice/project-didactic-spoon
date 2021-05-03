#include "lcg.hpp"
#include <ctime>

/*
Linear Congruential Generator (LCG) algorithm for producing sequences
of pseudo-random integers. next = ( coeff * current + constant ) mod modulus
*/


LCG ::      LCG ( ) { 
            this->current = time(0); // seed
            this->coeff = 1103515245; //parameter used by glibc
            this->constant = 12345; //parameter used by glibc
            this->modulus = std::pow(2, 31); //parameter used by glibc
        }
LCG ::      LCG ( unsigned seed, unsigned coeff, unsigned constant, unsigned modulus ) { 
            this->current = seed;
            this->coeff = coeff;
            this->constant = constant;
            this->modulus = modulus;
        }
        unsigned LCG :: next( ) {
            this-> current = ( coeff * current + constant ) % modulus;
            return this-> current;
        }
        unsigned LCG :: next( unsigned min, unsigned max, bool inclusive ) {
            this->current = ( coeff * current + constant ) % modulus;
            if( inclusive )
                return this->current / std::pow(2, 31) * (max - min + 1) + min;
            else
                return this->current / std::pow(2, 31) * (max - min - 1) + min + 1;
        }
