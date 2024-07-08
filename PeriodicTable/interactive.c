#include <stdio.h>
#include <string.h>
#include "table.h"

#define MAX_ELEMENTS 118

typedef struct {
    char name[20];
    char symbol[3];
    int atomicNumber;
    float atomicWeight;
    int electronCount;
    char electronShell[12];
    char notes[100];
} Element;

Element elements[MAX_ELEMENTS];

void initializeElements() {
    // Element 1: Hydrogen (technically 0)
    strcpy(elements[0].name, "Hydrogen");
    strcpy(elements[0].symbol, "H");
    elements[0].atomicNumber = 1;
    elements[0].atomicWeight = 1.008;
    elements[0].electronCount = 1;
    strcpy(elements[0].electronShell, "1");
    strcpy(elements[0].notes, "Lightest element.");
    // Element 2: Helium
    strcpy(elements[1].name, "Helium");
    strcpy(elements[1].symbol, "He");
    elements[1].atomicNumber = 2;
    elements[1].atomicWeight = 4.0026;
    elements[1].electronCount = 2;
    strcpy(elements[1].electronShell, "2");
    strcpy(elements[1].notes, "Noble gas.");
    // Element 3: Lithium
    strcpy(elements[2].name, "Lithium");
    strcpy(elements[2].symbol, "Li");
    elements[2].atomicNumber = 3;
    elements[2].atomicWeight = 6.94;
    elements[2].electronCount = 3;
    strcpy(elements[2].electronShell, "2.1");
    strcpy(elements[2].notes, "Alkali metal.");
    // Element 4: Beryllium
    strcpy(elements[3].name, "Beryllium");
    strcpy(elements[3].symbol, "Be");
    elements[3].atomicNumber = 4;
    elements[3].atomicWeight = 9.0122;
    elements[3].electronCount = 4;
    strcpy(elements[3].electronShell, "2.2");
    strcpy(elements[3].notes, "Lightweight metal, very stiff and strong, used in aerospace industry.");
    // Element 5: Boron
    strcpy(elements[4].name, "Boron");
    strcpy(elements[4].symbol, "B");
    elements[4].atomicNumber = 5;
    elements[4].atomicWeight = 10.81;
    elements[4].electronCount = 5;
    strcpy(elements[4].electronShell, "2.3");
    strcpy(elements[4].notes, "Metalloid, used in the production of glass and ceramics.");
    // Element 6: Carbon
    strcpy(elements[5].name, "Carbon");
    strcpy(elements[5].symbol, "C");
    elements[5].atomicNumber = 6;
    elements[5].atomicWeight = 12.011;
    elements[5].electronCount = 6;
    strcpy(elements[5].electronShell, "2.4");
    strcpy(elements[5].notes, "Nonmetal, basis of all known life, forms many compounds.");
    // Element 7: Nitrogen
    strcpy(elements[6].name, "Nitrogen");
    strcpy(elements[6].symbol, "N");
    elements[6].atomicNumber = 7;
    elements[6].atomicWeight = 14.007;
    elements[6].electronCount = 7;
    strcpy(elements[6].electronShell, "2.5");
    strcpy(elements[6].notes, "Nonmetal, makes up 78% of Earth's atmosphere.");
    // Element 8: Oxygen
    strcpy(elements[7].name, "Oxygen");
    strcpy(elements[7].symbol, "O");
    elements[7].atomicNumber = 8;
    elements[7].atomicWeight = 15.999;
    elements[7].electronCount = 8;
    strcpy(elements[7].electronShell, "2.6");
    strcpy(elements[7].notes, "Nonmetal, essential for respiration and combustion.");
    // Element 9: Fluorine
    strcpy(elements[8].name, "Fluorine");
    strcpy(elements[8].symbol, "F");
    elements[8].atomicNumber = 9;
    elements[8].atomicWeight = 18.998;
    elements[8].electronCount = 9;
    strcpy(elements[8].electronShell, "2.7");
    strcpy(elements[8].notes, "Highly reactive gas, used in toothpaste and water fluoridation.");
    // Element 10: Neon
    strcpy(elements[9].name, "Neon");
    strcpy(elements[9].symbol, "Ne");
    elements[9].atomicNumber = 10;
    elements[9].atomicWeight = 20.180;
    elements[9].electronCount = 10;
    strcpy(elements[9].electronShell, "2.8");
    strcpy(elements[9].notes, "Noble gas, used in neon lighting.");
    // Element 11: Sodium
    strcpy(elements[10].name, "Sodium");
    strcpy(elements[10].symbol, "Na");
    elements[10].atomicNumber = 11;
    elements[10].atomicWeight = 22.990;
    elements[10].electronCount = 11;
    strcpy(elements[10].electronShell, "2.8.1");
    strcpy(elements[10].notes, "Alkali metal.");
    // Element 12: Magnesium
    strcpy(elements[11].name, "Magnesium");
    strcpy(elements[11].symbol, "Mg");
    elements[11].atomicNumber = 12;
    elements[11].atomicWeight = 24.305;
    elements[11].electronCount = 12;
    strcpy(elements[11].electronShell, "2.8.2");
    strcpy(elements[11].notes, "Alkaline earth metal.");
    // Element 13: Aluminum
    strcpy(elements[12].name, "Aluminum");
    strcpy(elements[12].symbol, "Al");
    elements[12].atomicNumber = 13;
    elements[12].atomicWeight = 26.982;
    elements[12].electronCount = 13;
    strcpy(elements[12].electronShell, "2.8.3");
    strcpy(elements[12].notes, "Post-transition metal.");
    // Element 14: Silicon
    strcpy(elements[13].name, "Silicon");
    strcpy(elements[13].symbol, "Si");
    elements[13].atomicNumber = 14;
    elements[13].atomicWeight = 28.085;
    elements[13].electronCount = 14;
    strcpy(elements[13].electronShell, "2.8.4");
    strcpy(elements[13].notes, "Metalloid.");
    // Element 15: Phosphorus
    strcpy(elements[14].name, "Phosphorus");
    strcpy(elements[14].symbol, "P");
    elements[14].atomicNumber = 15;
    elements[14].atomicWeight = 30.974;
    elements[14].electronCount = 15;
    strcpy(elements[14].electronShell, "2.8.5");
    strcpy(elements[14].notes, "Nonmetal.");
    //
    //
    // Element 16: Sulfur
    strcpy(elements[15].name, "Sulfur");
    strcpy(elements[15].symbol, "S");
    elements[15].atomicNumber = 16;
    elements[15].atomicWeight = 32.06;
    strcpy(elements[15].notes, "Nonmetal.");
    // Element 17: Chlorine
    strcpy(elements[16].name, "Chlorine");
    strcpy(elements[16].symbol, "Cl");
    elements[16].atomicNumber = 17;
    elements[16].atomicWeight = 35.45;
    strcpy(elements[16].notes, "Halogen.");
    // Element 18: Argon
    strcpy(elements[17].name, "Argon");
    strcpy(elements[17].symbol, "Ar");
    elements[17].atomicNumber = 18;
    elements[17].atomicWeight = 39.948;
    strcpy(elements[17].notes, "Noble gas.");
    // Element 19: Potassium
    strcpy(elements[18].name, "Potassium");
    strcpy(elements[18].symbol, "K");
    elements[18].atomicNumber = 19;
    elements[18].atomicWeight = 39.098;
    strcpy(elements[18].notes, "Alkali metal.");
    // Element 20: Calcium
    strcpy(elements[19].name, "Calcium");
    strcpy(elements[19].symbol, "Ca");
    elements[19].atomicNumber = 20;
    elements[19].atomicWeight = 40.078;
    strcpy(elements[19].notes, "Alkaline earth metal.");
}

void centerText(char* text, int width) {
    int len = strlen(text);
    int pad = (width - len) / 2;
    for (int i = 0; i < pad; i++) printf(" ");
    printf("%s", text);
    for (int i = 0; i < (width - len - pad); i++) printf(" ");
}

void elementExample(char *name, char *symbol, int atomicNumber, float atomicWeight, int electronCount, char *electronShell, char *notes) {
    blue();
    printf("\n");
    printf("\t\t   +-------------------+\n");
    printf("\t\t   | %-17.3f |\n", atomicWeight); // Left align atomic weight within 17 spaces
    printf("\t\t   | %17d |\n", electronCount); // Right align electron count within 17 spaces
    printf("\t\t   |                   |\n");
    printf("\t\t   | ");
    centerText(symbol, 17);
    printf(" |\n");
    printf("\t\t   | ");
    centerText(name, 17);
    printf(" |\n");
    printf("\t\t   |                   |\n");
    printf("\t\t   | %-17d |\n", atomicNumber); // Left align atomic number within 17 spaces
    printf("\t\t   | ");
    centerText(electronShell, 17);
    printf(" |\n");
    printf("\t\t   +-------------------+\n");
    printf("\n\n");
    printf("\t\t   +-----------------------------+\n");
    printf("\t\t   |  - Element Information -    |\n");
    printf("\t\t   |    -------------------      |\n");
    printf("\t\t   | Element Name: %-13s |\n", name);
    printf("\t\t   | Element Symbol: %-11s |\n", symbol);
    printf("\t\t   | Atomic Mass: %-14.3f |\n", atomicWeight);
    printf("\t\t   | Atomic Number: %-12d |\n", atomicNumber);
    printf("\t\t   | Notes: %-20s |\n", notes);
    printf("\t\t   +-----------------------------+\n");
    colorReset();
}

void viewElement(char* symbol) {
    for (int i = 0; i < MAX_ELEMENTS; i++) {
        if (strcmp(elements[i].symbol, symbol) == 0) {
            Element e = elements[i];
            elementExample(e.name, e.symbol, e.atomicNumber, e.atomicWeight, e.electronCount, e.electronShell, e.notes);
            return;
        }
    }
    printf("Element with symbol %s not found.\n", symbol);
}

void addData(char* symbol) {
    for (int i = 0; i < MAX_ELEMENTS; i++) {
        if (strcmp(elements[i].symbol, symbol) == 0) {
            printf("Enter new data for %s:\n", elements[i].name);
            printf("Atomic Weight: ");
            scanf("%f", &elements[i].atomicWeight);
            printf("Data updated.\n");
            return;
        }
    }
    printf("Element with symbol %s not found.\n", symbol);
}

void addNote(char* symbol) {
    for (int i = 0; i < MAX_ELEMENTS; i++) {
        if (strcmp(elements[i].symbol, symbol) == 0) {
            printf("Enter note for %s: ", elements[i].name);
            scanf(" %[^\n]", elements[i].notes);
            printf("Note added.\n");
            return;
        }
    }
    printf("Element with symbol %s not found.\n", symbol);
}

void showMenu() {
    lime();
    printf("1. View the Table\n");
    colorReset();
    blue();
    printf("2. View an Element\n");
    colorReset();
    lime();
    printf("3. Add Data\n");
    colorReset();
    blue();
    printf("4. Add Note\n");
    colorReset();
    lime();
    printf("5. Exit\n");
    colorReset();
}

int main() {
    initializeElements();
    int choice;
    char symbol[3];
    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 5) {
            break;
        }
        if (choice == 1) {
            table(); // Call the table function from table.c
            continue;
        }
        printf("Enter element symbol: ");
        scanf("%s", symbol);
        switch (choice) {
            case 2:
                viewElement(symbol);
                break;
            case 3:
                addData(symbol);
                break;
            case 4:
                addNote(symbol);
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}