// Cryptic Marshlands

#include "cosmos-header.h"

void crypticMarshlands(){
	int i,res;
	int choice;
	char command[50];
    if(playerLocation!=1){
    printf("\n\n\nTravelling to Phaze Clan Holdout \n\n\n\n");}
    if(travelMarsh==0)
    {
        smart();
        travelMarsh++;
    }
    if(travelMarsh==1) //QUEST 1
    {
        i=0;
        printf("\n\n\n =*=*=*QUEST STARTED: THE GHOST KNIGHT *=*=*=\n\n");
printf("\nA new challenger approaches \n\n\n");
printf("Ghost Knight: \t Bring me the chosen One. I will slay him and enchant my sword with his blood.\n\n");
	}
}