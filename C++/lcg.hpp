#ifdef _LCG
#define _LCG

/*
Linear Congruential Generator (LCG) algorithm for producing sequences
of pseudo-random integers. next = ( coeff * current + constant ) mod modulus
*/

class LCG {
    unsigned current;
    unsigned coeff;
    unsigned constant;
    unsigned modulus;
    public:
        LCG ( );
        LCG ( unsigned seed, unsigned coeff, unsigned constant, unsigned modulus );
        unsigned next( );
        unsigned next( unsigned min, unsigned max, bool inclusive );
};