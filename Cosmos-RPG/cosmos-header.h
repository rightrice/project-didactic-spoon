#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <windows.h>

// Game functions
void displayWorldMap();
void travelUniverse();
void universeMap();
int choose();
void changeto();
void comm();
void cmdls();

// Jhourgen Universe Locations
void crypticMarshlands();
void area2();
void area3();
void area4();
void area5();
void area6();
void area7();
void area8();
void area9();

extern int crypticMarsh;
extern int travelMarsh;

//World
extern int playerLocation; //gives you your current location in the multiplex of universes
extern int warp; //will tell you whether or not you are able to us warp to travel
extern int areaDiscovery; //this will tell you whether or not you have discovered an area yet
extern int artifactsDiscovered; // this is how many aritfacts you have found throughout the multiplex

//Player Credentials
extern char playerName[20]; // what your player is called
extern char homeUniverse[50]; // where player is originally from
extern int intelligence, strength, challengesCompleted, mapCompletion;
extern int companion; // 0 for halfling, 1 for pup, 2 for younging, 3 for wolf
extern int toolsEquipped; // 0 for map, 1 for map and compass, 2 for map, compass and telescope, 3 for map, compass, telescope and Cosmos Position System (C.P.S)
extern int transportation; // 0 for feet, 1 for rhino, 2 for sailship, 3 for blastership, 4 for freightship, 5 for Cosmosship

// Universe challenges
extern char traveledUniverse[50]; // name of the current universe you have traveled to
extern int universeNumber; // what number universe it is on your journey
extern int universeWorlds; // worlds within that universe available for discovery

// Command and Bettergets
extern int btrgts;
char bettergets();