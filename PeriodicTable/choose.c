// Choose
#include "periodic-header.h"

int choose(int *a, int maxChoice, char *userName){
	int i=0;
    while(i==0){
	printf("\n\n\t\t   Select an option by selecting the corresponding number and pressing enter.\n");
    printf("\t\t   Selection:  ");
    scanf("%d",&*a);
    if(*a<=maxChoice && *a>0){
         printf("\n"); 
         i++;
         break;
       }
    else{
        printf("\n\n\t\t   Sorry %s, that is not a valid option. Please try again.\n", userName);
		Sleep (2000);
        continue;
    }
}
    return *a;
}
