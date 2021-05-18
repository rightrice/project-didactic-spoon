// Choose
#include "cosmos-header.h"

int choose(int *a, int maxChoice){
	int i=0;
    while(i==0){
    printf("\n\n\t\t   Traveler:  ");
    scanf("%d",&*a);
    if(*a<=maxChoice && *a>0){
         printf("\n"); 
         i++;
         break;
       }
    else{
        printf("\n\n\t\t   Sorry %s, that is not a valid option. Please select another option.", playerName);
		Sleep (2000);
        continue;
    }
}
    return *a;
}