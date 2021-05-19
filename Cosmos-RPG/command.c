// Command
#include "cosmos-header.h"


//Basic Commands of Cosmos
void comm()
{
    int i;
    char command[50];
    i=0;
    while(i==0){
    printf("\t>:  ");
        bettergets(command);
        if(stricmp(command,"cmd")==0){changeto(); i++; break;}
        if(stricmp(command,"map")==0){displayWorldMap(); i++; break; }

        if(i==0){printf("\nSorry %s, that command can't be found \n", playerName);
		continue;
		}
    }

}