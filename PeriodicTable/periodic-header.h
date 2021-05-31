#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

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
