/*	 +------------------+
	 |  Final Project   |
	 | Created by Rhino |
	 +------------------+
 - For the final project i chose to incorporate some things we worked on during the class this semester.
 - This project is based on the periodic table and consists of arrays, variables and other fun stuff.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void blue() {
	printf("\033[0;36m");
}
void lime() {
	printf("\033[1;32m");
}
void yellow() {
	printf("\033[1;33m");
}
void colorReset() {
	printf("\033[0m");
}

int main() {
	system("cls");
	yellow();
	printf("   Welcome...\n");
	Sleep ( 300 );
	printf("   Please enter your name: ");	
	char name [20];
	fscanf(stdin, "%20s", name);
	Sleep ( 1300 );
	system("cls");
	printf("\n\n\n");
	printf("\t                                 Periodic Table of Elements\n");
	colorReset();
	blue();
	printf("\t+----+                                                                               +----+\n");
	printf("\t| H  |                                                                               | He |\n");
	printf("\t|----+----+                                                 +----+----+----+----+----+----|\n");
	printf("\t| Li | Be |                                                 | B  | C  | N  | O  | F  | Ne |\n");
	printf("\t|----+----|                                                 |----+----+----+----+----+----|\n");
	printf("\t| Na | Mg |                                                 | Al | Si | P  | S  | Cl | Ar |\n");
	printf("\t|----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----|\n");
	printf("\t| K  | Ca | Sc | Ti | V  | Cr | Mn | Fe | Co | Ni | Cu | Zn | Ga | Ge | As | Se | Br | Kr |\n");
	printf("\t|----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----|\n");
	printf("\t| Rb | Sr | Y  | Zr | Nb | Mo | Tc | Ru | Rh | Pd | Ag | Cd | In | Sn | Sb | Te | I  | Xe |\n");
	printf("\t|----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----|\n");
	printf("\t| Cs | Ba |    | Hf | Ta | W  | Re | Os | Ir | Pt | Au | Hg | Tl | Pb | Bi | Po | At | Rn |\n");
	printf("\t|----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----|\n");
	printf("\t| Fr | Ra |    | Rf | Db | Sg | Bh | Hs | Mt | Ds | Rg | Cn | Uut| Fl | Uup| Lv | Uus| Uuo|\n");
	printf("\t+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+\n");
	printf("\n");
	printf("\t       +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+\n");
	printf("\t       | La | Ce | Pr | Nd | Pm | Sm | Eu | Gd | Tb | Dy | Ho | Er | Tm | Yb | Lu |\n");
	printf("\t       |----+----+----+----+----+----+----+----+----+----+----+----+----+----+----|\n");
	printf("\t       | Ac | Th | Pa | U  | Np | Pu | Am | Cm | Bk | Cf | Es | Fm | Md | No | Lr |\n");
	printf("\t       +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+\n");
	colorReset();
	printf("\n\n");
	yellow();
	fprintf(stdout,"\n   %s, ", name);
    printf("Select an option, 1-3.  \n\n\n");
	printf("\t\t 1) Examine\n");
	printf("\t\t 2) Add information\n");
	printf("\t\t 3) Exit\n\n");
	int selection [1];
	printf("     Selection: ");
	fscanf(stdin, "%1d", selection);
	colorReset();
	return (420);
}