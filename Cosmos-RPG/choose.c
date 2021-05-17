// Choose
#include "cosmos-header.h"

int choose(int *a, int maxChoice){
	int i=0;
    while(i==0){
    printf("\n\n Traveler:  ");
    scanf("%d",&*a);
    if(*a<=maxChoice && *a>0){
         printf("\n"); 
         i++;
         break;
       }
    else{
        printf("\nInvalid Choice, Choose again.\n");
        continue;
    }
}
    return *a;
}