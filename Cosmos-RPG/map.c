// Jhourgen Universe Map

#include "cosmos-header.h"

void travelUniverse(){
    if(playerLocation==1) crypticMarshlands();
//	if(currentloc==2) area2();
//	if(currentloc==3) area3();
//	if(currentloc==4) area4();
//	if(currentloc==5) area5();
//	if(currentloc==6) area6();
//	if(currentloc==7) area7();
//	if(currentloc==8) area8();
//	if(currentloc==9) area9();

}

void displayWorldMap() {
puts("\t\t                                              ---Jhourgen Universe---\n"
"\t\t              |      |       |       |       |       |       |       |       |       |       |       |      \n"
"\t\t       +---------------------------------------------------------------------------------------------------+\n"
"\t\t   -20 | /************************~                                                         ~  ***#########|\n"
"\t\t   -19 | *-____                    ~                                                       ~~ * * *########|\n"
"\t\t   -18 |      /  Cryptic Marshlands ~~~~~                                                  ~~  ***#########|\n"
"\t\t   -17 |     /                           ~~                                              ~~~~              |\n"
"\t\t   -16 |    /_______             *         ~                                           ~~~                 |\n"
"\t\t   -15 |            |            *         ~                                       ~~~~~~                  |\n"
"\t\t   -14 |            |            *         ~                            ~~~~~~~~~~~~~                      |\n"
"\t\t   -13 |            |  _________/          ~~~~~~~~~~~~  Area 2     ~~~~~~~~                               |\n"
"\t\t   -12 |                                      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                  ###########  |\n"
"\t\t   -11 |                                                                                          #########|\n"
"\t\t   -10 |                                                                                    ##########     |\n"
"\t\t   -9  |                                                                                  #####   #########|\n"
"\t\t   -8  |                                                                                ##########         |\n"
"\t\t   -7  |                                                                               ## Area 3 ##        |\n"
"\t\t   -6  |                                                                                ##########         |\n"
"\t\t   -5  |                                                                                   ################|\n"
"\t\t   -4  |                                                                                          #########|\n"
"\t\t   -3  |                                                                                       #########   |\n"
"\t\t   -2  |                                                                                     #########     |\n"
"\t\t   -1  |     Area 4                                                                                        |\n"
"\t\t    0  +---------------------------------------------------------------------------------------------------+\n"
"\t\t    1  |                                                                                                   |\n"
"\t\t    2  |                                                                                                   |\n"
"\t\t    3  |                                                                                                   |\n"
"\t\t    4  |                                                                                                   |\n"
"\t\t    5  |                                                                                                   |\n"
"\t\t    6  |                                                                                                   |\n"
"\t\t    7  |                                                                                                   |\n"
"\t\t    8  |                                                                                                   |\n"
"\t\t    9  |                                                                                                   |\n"
"\t\t    10 |                                                                                                   |\n"
"\t\t    11 |                                                                                                   |\n"
"\t\t    12 |                                                                                                   |\n"
"\t\t    13 |                                                                                                   |\n"
"\t\t    14 |                                                                                                   |\n"
"\t\t    15 |                                                                                                   |\n"
"\t\t    16 |                                                                                                   |\n"
"\t\t    17 |                                                                                                   |\n"
"\t\t    18 |                                                                                                   |\n"
"\t\t    19 |                                                                                                   |      N   \n"
"\t\t    20 |                                                                                                   |    W + E \n"
"\t\t       +---------------------------------------------------------------------------------------------------+      S   \n"
"\t\t              |      |       |       |       |       |       |       |       |       |       |       |      \n");
printf("\n");
printf("\t\t   +-------------------------+\n");
printf("\t\t   |         Legend:         |\n");
printf("\t\t   | * is tree               |\n");
printf("\t\t   | --- is world boundary   |\n");
printf("\t\t   | ~~~ is ocean/lake/river |\n");
printf("\t\t   | x is planet             |\n");
printf("\t\t   | ^ are mountian ranges   |\n");
printf("\t\t   | # desert biomes         |\n");
printf("\t\t   +-------------------------+\n");

}

void universeMap(){
     int i=0,j=0;
     char command[20];
     while(i==0){
     printf("Warp to: \t");
        bettergets(command);

        if(stricmp(command,"cryptic marshlands")==0 )
           if(crypticMarsh==1)
                if(playerLocation!=1)
                    if(warp==1){crypticMarshlands(); i++;j++;}
                    else {printf("You are currently here. \n\n"); continue;}
                else {printf("You are not allowed to travel now.\n\n"); continue;}
            else {printf("This place has not yet been discovered.\n\n"); continue;}
	}
}