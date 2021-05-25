// Command
#include "cosmos-header.h"


//Basic Commands of Cosmos
void comm()
{
    int i;
    char command[50];
    i=0;
    while(i==0){
	printf("\t\t   Your available commands are:\n");
	printf("\t\t   ... hehe, why not try the command cmdls to view your available commands :)\n\n");
    printf("\n\n\t>:  ");
        bettergets(command);
        if(stricmp(command,"cmd")==0){changeto(); i++; break;}
		if(stricmp(command,"cmdls")==0){cmdls(); i++; break;}
        if(stricmp(command,"map")==0){displayWorldMap(); i++; break; }
		if(stricmp(command,"warp")==0){universeMap(); i++; break; }

        if(i==0){printf("\nSorry %s, that command can't be found \n", playerName);
		continue;
		}
    }

}