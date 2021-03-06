/*Cosmos is a role playing game where you are traveling through a multiplex of universes, meeting new creatures and people along the way. 
Whilst on this journey you will come across challenges you must complete. If you choose wrong you may just end up being devoured by the
suplex of blackholes at the end of the Cosmos. Enjoy! :)
 +--------------------+
 | Created by Rhino   |
 | Property of ASPECT |
 +--------------------+*/

#include "cosmos-header.h"

// Global Settings (variables)

// Text Colors
void blue() {
	printf("\033[0;36m");
}
void yellow() {
	printf("\033[1;33m");
}
void red() {
	printf("\033[0;31m");
}
void colorReset() {
	printf("\033[0m");
}


// World
int playerLocation; //gives you your current location in the multiplex of universes
int warp; //will tell you whether or not you are able to us warp to travel
int areaDiscovery; //this will tell you whether or not you have discovered an area yet
int artifactsDiscovered; // this is how many aritfacts you have found throughout the multiplex
int choice();

// Locations
int crypticMarsh;
int travelMarsh;

//Bettergets
int btrgts=0;

// Player Credentials
char playerName[20]; // what your player is called
char homeUniverse[50]; // where player is originally from
int intelligence, strength, challengesCompleted, mapCompletion;
int companion; // 0 for halfling, 1 for pup, 2 for younging, 3 for wolf
int toolsEquipped; // 0 for map, 1 for map and compass, 2 for map, compass and telescope, 3 for map, compass, telescope and Cosmos Position System (C.P.S)
int transportation; // 0 for feet, 1 for rhino, 2 for sailship, 3 for blastership, 4 for freightship, 5 for Cosmosship

// Universe challenges
char traveledUniverse[50]; // name of the current universe you have traveled to
int universeNumber; // what number universe it is on your journey
int universeWorlds; // worlds within that universe available for discovery

int main(){

	int choice;
	int playerAge;
	
	// Welcome Screen
	system("cls");
	printf("\n\n\n\n");
	yellow();
	printf("\t\t *------------------------*\n");
	printf("\t\t | Welcome to The Cosmos! |\n");
	printf("\t\t *------------------------*\n\n");
	printf("\t\t   A CLI adventure game");
	Sleep (150);
	printf("\n\n\t\t   Please enter your name, adventurer:  ");
	fscanf (stdin, "%20s", playerName);
	Sleep (200);
	printf("\n \t\t   %s, ", playerName);
	printf("you may now begin your crusade through the Cosmos.\n");
	colorReset();
	printf("\n\n\n");
	red();
	printf("\t\t   When you see [ X ] followed by options, \n");
	printf("\t\t   this means you must choose which path you want to take. ");
	// Gameplay begins
	Sleep (7500);
	colorReset();
	system("cls");
	blue();
	printf("\n\n\n");
	printf("\t\t   %s, your journey begins in the Cryptic Marshlands of the Jhourgen Universe.\n\n", playerName);
	printf("\t\t   The Wise Mandronian: *arrgg* yet another traveler is attempting a journey throughout the Cosmos.\n");
	printf("\t\t   What makes you think you can make it through this endeavour?\n\n");
	colorReset();
	yellow();
	printf("\t\t   Options:\n");
	printf("\t\t   [1] I am the strongest of the strong \t [2] I am trying to get home \t [3] I am unaware\n\n");
	
	choose(&choice,3);
	switch(choice){
		case 1:printf("\t\t   The Wise Mandronian: HaHa! Well, we shall just see about that one, wont we? Well, in the spirit of survival I shall entrust you with a map of the multiplex.\n"); break;
		case 2:printf("\t\t   The Wise Mandronian: Ahh, I see young one. Well, in the spirit of survival I shall entrust you with a map of the multiplex.\n\t\t   I wish you the best of luck.\n"); break;
		case 3:printf("\t\t   The Wise Mandronian: Hmm, intriguing. Very much so.  Well, in the spirit of survival I shall entrust you with a map of the multiplex.\n"); break;
		default: printf("\t\t   Sorry %s, that is not a valid option", playerName); break;
	}
	colorReset();
	red();
	printf("\n\n\t\t   The multiplex map has been added to your inventory.");
	printf("\n\t\t   To view the multiplex map, type map and hit return/enter.\n\n\n");
	colorReset();
	blue();
	playerLocation=1;
	warp=1;
	comm();
	colorReset();
}
