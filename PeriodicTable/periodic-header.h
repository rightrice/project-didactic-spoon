#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

void loading();
extern char userName[20];
// Prints view of periodic table
void table();
// Manipulates periodic table
void examineElement();
void addElement();
//Not in use yet
void menuSelection();
char selection[2];
// Used to choose what you want to do with the program
int choose();
// Element Credentials
extern char elementName[50];
extern char sb[5];
extern int atm;
extern float atms;
extern char block;
extern char atc[20];
extern char prop[250];

// Main Menu
void mainMenu();