//Switch
//This is used to change functions within the game

#include "cosmos-header.h"

void changeto() {
        int i=0;
     char command[50];
     while(i==0){
     printf("Switch to: \t");
        bettergets(command);

        if(stricmp(command, "cmd")==0) comm();
        if(i==0) {printf("Invalid command\n"); continue;}

     }
}