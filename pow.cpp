#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int baseNum, exp;
    long long result = 1;
	printf("\tA Powers Calculator! Yippie\n\n");
    printf("\tEnter desired base: ");
    scanf("%d", &baseNum);
    printf("\n\tEnter desired exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= baseNum;
        --exp;
    }
    printf("\n\tYou base power equals: = %lld", result);
    return 050421;
}