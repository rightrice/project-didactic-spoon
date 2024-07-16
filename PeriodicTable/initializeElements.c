#include <string.h>
#include "table.h"
// Disclosure: I used openai to aid the data entry process for the element's information
void initializeElements() {
    // Element 1: Hydrogen (technically 0)
    strcpy(elements[0].name, "Hydrogen");
    strcpy(elements[0].symbol, "H");
    elements[0].atomicNumber = 1;
    elements[0].atomicWeight = 1.008;
    elements[0].electronCount = 1;
    strcpy(elements[0].electronShell, "1");
    strcpy(elements[0].notes, "Lightest element.");

    strcpy(elements[1].name, "Helium");
    strcpy(elements[1].symbol, "He");
    elements[1].atomicNumber = 2;
    elements[1].atomicWeight = 4.0026;
    elements[1].electronCount = 2;
    strcpy(elements[1].electronShell, "2");
    strcpy(elements[1].notes, "Noble gas.");

    strcpy(elements[2].name, "Lithium");
    strcpy(elements[2].symbol, "Li");
    elements[2].atomicNumber = 3;
    elements[2].atomicWeight = 6.94;
    elements[2].electronCount = 3;
    strcpy(elements[2].electronShell, "2, 1");
    strcpy(elements[2].notes, "Alkali metal.");

    strcpy(elements[3].name, "Beryllium");
    strcpy(elements[3].symbol, "Be");
    elements[3].atomicNumber = 4;
    elements[3].atomicWeight = 9.0122;
    elements[3].electronCount = 4;
    strcpy(elements[3].electronShell, "2, 2");
    strcpy(elements[3].notes, "Alkaline earth metal.");

    strcpy(elements[4].name, "Boron");
    strcpy(elements[4].symbol, "B");
    elements[4].atomicNumber = 5;
    elements[4].atomicWeight = 10.81;
    elements[4].electronCount = 5;
    strcpy(elements[4].electronShell, "2, 3");
    strcpy(elements[4].notes, "Metalloid.");

    strcpy(elements[5].name, "Carbon");
    strcpy(elements[5].symbol, "C");
    elements[5].atomicNumber = 6;
    elements[5].atomicWeight = 12.011;
    elements[5].electronCount = 6;
    strcpy(elements[5].electronShell, "2, 4");
    strcpy(elements[5].notes, "Non-metal.");

strcpy(elements[6].name, "Nitrogen");
strcpy(elements[6].symbol, "N");
elements[6].atomicNumber = 7;
elements[6].atomicWeight = 14.007;
elements[6].electronCount = 7;
strcpy(elements[6].electronShell, "2, 5");
strcpy(elements[6].notes, "Non-metal.");

strcpy(elements[7].name, "Oxygen");
strcpy(elements[7].symbol, "O");
elements[7].atomicNumber = 8;
elements[7].atomicWeight = 15.999;
elements[7].electronCount = 8;
strcpy(elements[7].electronShell, "2, 6");
strcpy(elements[7].notes, "Non-metal.");

strcpy(elements[8].name, "Fluorine");
strcpy(elements[8].symbol, "F");
elements[8].atomicNumber = 9;
elements[8].atomicWeight = 18.998;
elements[8].electronCount = 9;
strcpy(elements[8].electronShell, "2, 7");
strcpy(elements[8].notes, "Halogen.");

strcpy(elements[9].name, "Neon");
strcpy(elements[9].symbol, "Ne");
elements[9].atomicNumber = 10;
elements[9].atomicWeight = 20.180;
elements[9].electronCount = 10;
strcpy(elements[9].electronShell, "2, 8");
strcpy(elements[9].notes, "Noble gas.");

strcpy(elements[10].name, "Sodium");
strcpy(elements[10].symbol, "Na");
elements[10].atomicNumber = 11;
elements[10].atomicWeight = 22.990;
elements[10].electronCount = 11;
strcpy(elements[10].electronShell, "2, 8, 1");
strcpy(elements[10].notes, "Alkali metal.");

strcpy(elements[11].name, "Magnesium");
strcpy(elements[11].symbol, "Mg");
elements[11].atomicNumber = 12;
elements[11].atomicWeight = 24.305;
elements[11].electronCount = 12;
strcpy(elements[11].electronShell, "2, 8, 2");
strcpy(elements[11].notes, "Alkaline earth metal.");

strcpy(elements[12].name, "Aluminium");
strcpy(elements[12].symbol, "Al");
elements[12].atomicNumber = 13;
elements[12].atomicWeight = 26.982;
elements[12].electronCount = 13;
strcpy(elements[12].electronShell, "2, 8, 3");
strcpy(elements[12].notes, "Post-transition metal.");

strcpy(elements[13].name, "Silicon");
strcpy(elements[13].symbol, "Si");
elements[13].atomicNumber = 14;
elements[13].atomicWeight = 28.085;
elements[13].electronCount = 14;
strcpy(elements[13].electronShell, "2, 8, 4");
strcpy(elements[13].notes, "Metalloid.");

strcpy(elements[14].name, "Phosphorus");
strcpy(elements[14].symbol, "P");
elements[14].atomicNumber = 15;
elements[14].atomicWeight = 30.974;
elements[14].electronCount = 15;
strcpy(elements[14].electronShell, "2, 8, 5");
strcpy(elements[14].notes, "Non-metal.");

strcpy(elements[15].name, "Sulfur");
strcpy(elements[15].symbol, "S");
elements[15].atomicNumber = 16;
elements[15].atomicWeight = 32.06;
elements[15].electronCount = 16;
strcpy(elements[15].electronShell, "2, 8, 6");
strcpy(elements[15].notes, "Non-metal.");

strcpy(elements[16].name, "Chlorine");
strcpy(elements[16].symbol, "Cl");
elements[16].atomicNumber = 17;
elements[16].atomicWeight = 35.45;
elements[16].electronCount = 17;
strcpy(elements[16].electronShell, "2, 8, 7");
strcpy(elements[16].notes, "Halogen.");

strcpy(elements[17].name, "Argon");
strcpy(elements[17].symbol, "Ar");
elements[17].atomicNumber = 18;
elements[17].atomicWeight = 39.948;
elements[17].electronCount = 18;
strcpy(elements[17].electronShell, "2, 8, 8");
strcpy(elements[17].notes, "Noble gas.");

strcpy(elements[18].name, "Potassium");
strcpy(elements[18].symbol, "K");
elements[18].atomicNumber = 19;
elements[18].atomicWeight = 39.098;
elements[18].electronCount = 19;
strcpy(elements[18].electronShell, "2, 8, 8, 1");
strcpy(elements[18].notes, "Alkali metal.");

strcpy(elements[19].name, "Calcium");
strcpy(elements[19].symbol, "Ca");
elements[19].atomicNumber = 20;
elements[19].atomicWeight = 40.078;
elements[19].electronCount = 20;
strcpy(elements[19].electronShell, "2, 8, 8, 2");
strcpy(elements[19].notes, "Alkaline earth metal.");

strcpy(elements[20].name, "Scandium");
strcpy(elements[20].symbol, "Sc");
elements[20].atomicNumber = 21;
elements[20].atomicWeight = 44.955;
elements[20].electronCount = 21;
strcpy(elements[20].electronShell, "2, 8, 9, 2");
strcpy(elements[20].notes, "Transition metal.");

strcpy(elements[21].name, "Titanium");
strcpy(elements[21].symbol, "Ti");
elements[21].atomicNumber = 22;
elements[21].atomicWeight = 47.867;
elements[21].electronCount = 22;
strcpy(elements[21].electronShell, "2, 8, 10, 2");
strcpy(elements[21].notes, "Transition metal.");

strcpy(elements[22].name, "Vanadium");
strcpy(elements[22].symbol, "V");
elements[22].atomicNumber = 23;
elements[22].atomicWeight = 50.942;
elements[22].electronCount = 23;
strcpy(elements[22].electronShell, "2, 8, 11, 2");
strcpy(elements[22].notes, "Transition metal.");

strcpy(elements[23].name, "Chromium");
strcpy(elements[23].symbol, "Cr");
elements[23].atomicNumber = 24;
elements[23].atomicWeight = 51.996;
elements[23].electronCount = 24;
strcpy(elements[23].electronShell, "2, 8, 13, 1");
strcpy(elements[23].notes, "Transition metal.");

strcpy(elements[24].name, "Manganese");
strcpy(elements[24].symbol, "Mn");
elements[24].atomicNumber = 25;
elements[24].atomicWeight = 54.938;
elements[24].electronCount = 25;
strcpy(elements[24].electronShell, "2, 8, 13, 2");
strcpy(elements[24].notes, "Transition metal.");

strcpy(elements[25].name, "Iron");
strcpy(elements[25].symbol, "Fe");
elements[25].atomicNumber = 26;
elements[25].atomicWeight = 55.845;
elements[25].electronCount = 26;
strcpy(elements[25].electronShell, "2, 8, 14, 2");
strcpy(elements[25].notes, "Transition metal.");

strcpy(elements[26].name, "Cobalt");
strcpy(elements[26].symbol, "Co");
elements[26].atomicNumber = 27;
elements[26].atomicWeight = 58.933;
elements[26].electronCount = 27;
strcpy(elements[26].electronShell, "2, 8, 15, 2");
strcpy(elements[26].notes, "Transition metal.");

strcpy(elements[27].name, "Nickel");
strcpy(elements[27].symbol, "Ni");
elements[27].atomicNumber = 28;
elements[27].atomicWeight = 58.693;
elements[27].electronCount = 28;
strcpy(elements[27].electronShell, "2, 8, 16, 2");
strcpy(elements[27].notes, "Transition metal.");

strcpy(elements[28].name, "Copper");
strcpy(elements[28].symbol, "Cu");
elements[28].atomicNumber = 29;
elements[28].atomicWeight = 63.546;
elements[28].electronCount = 29;
strcpy(elements[28].electronShell, "2, 8, 18, 1");
strcpy(elements[28].notes, "Transition metal.");

strcpy(elements[29].name, "Zinc");
strcpy(elements[29].symbol, "Zn");
elements[29].atomicNumber = 30;
elements[29].atomicWeight = 65.38;
elements[29].electronCount = 30;
strcpy(elements[29].electronShell, "2, 8, 18, 2");
strcpy(elements[29].notes, "Transition metal.");

strcpy(elements[30].name, "Gallium");
strcpy(elements[30].symbol, "Ga");
elements[30].atomicNumber = 31;
elements[30].atomicWeight = 69.723;
elements[30].electronCount = 31;
strcpy(elements[30].electronShell, "2, 8, 18, 3");
strcpy(elements[30].notes, "Post-transition metal.");

strcpy(elements[31].name, "Germanium");
strcpy(elements[31].symbol, "Ge");
elements[31].atomicNumber = 32;
elements[31].atomicWeight = 72.63;
elements[31].electronCount = 32;
strcpy(elements[31].electronShell, "2, 8, 18, 4");
strcpy(elements[31].notes, "Metalloid.");

strcpy(elements[32].name, "Arsenic");
strcpy(elements[32].symbol, "As");
elements[32].atomicNumber = 33;
elements[32].atomicWeight = 74.922;
elements[32].electronCount = 33;
strcpy(elements[32].electronShell, "2, 8, 18, 5");
strcpy(elements[32].notes, "Metalloid.");

strcpy(elements[33].name, "Selenium");
strcpy(elements[33].symbol, "Se");
elements[33].atomicNumber = 34;
elements[33].atomicWeight = 78.96;
elements[33].electronCount = 34;
strcpy(elements[33].electronShell, "2, 8, 18, 6");
strcpy(elements[33].notes, "Non-metal.");

strcpy(elements[34].name, "Bromine");
strcpy(elements[34].symbol, "Br");
elements[34].atomicNumber = 35;
elements[34].atomicWeight = 79.904;
elements[34].electronCount = 35;
strcpy(elements[34].electronShell, "2, 8, 18, 7");
strcpy(elements[34].notes, "Halogen.");

strcpy(elements[35].name, "Krypton");
strcpy(elements[35].symbol, "Kr");
elements[35].atomicNumber = 36;
elements[35].atomicWeight = 83.798;
elements[35].electronCount = 36;
strcpy(elements[35].electronShell, "2, 8, 18, 8");
strcpy(elements[35].notes, "Noble gas.");

strcpy(elements[36].name, "Rubidium");
strcpy(elements[36].symbol, "Rb");
elements[36].atomicNumber = 37;
elements[36].atomicWeight = 85.468;
elements[36].electronCount = 37;
strcpy(elements[36].electronShell, "2, 8, 18, 8, 1");
strcpy(elements[36].notes, "Alkali metal.");

strcpy(elements[37].name, "Strontium");
strcpy(elements[37].symbol, "Sr");
elements[37].atomicNumber = 38;
elements[37].atomicWeight = 87.62;
elements[37].electronCount = 38;
strcpy(elements[37].electronShell, "2, 8, 18, 8, 2");
strcpy(elements[37].notes, "Alkaline earth metal.");

strcpy(elements[38].name, "Yttrium");
strcpy(elements[38].symbol, "Y");
elements[38].atomicNumber = 39;
elements[38].atomicWeight = 88.906;
elements[38].electronCount = 39;
strcpy(elements[38].electronShell, "2, 8, 18, 9, 2");
strcpy(elements[38].notes, "Transition metal.");

strcpy(elements[39].name, "Zirconium");
strcpy(elements[39].symbol, "Zr");
elements[39].atomicNumber = 40;
elements[39].atomicWeight = 91.224;
elements[39].electronCount = 40;
strcpy(elements[39].electronShell, "2, 8, 18, 10, 2");
strcpy(elements[39].notes, "Transition metal.");

strcpy(elements[40].name, "Niobium");
strcpy(elements[40].symbol, "Nb");
elements[40].atomicNumber = 41;
elements[40].atomicWeight = 92.906;
elements[40].electronCount = 41;
strcpy(elements[40].electronShell, "2, 8, 18, 12, 1");
strcpy(elements[40].notes, "Transition metal.");

strcpy(elements[41].name, "Molybdenum");
strcpy(elements[41].symbol, "Mo");
elements[41].atomicNumber = 42;
elements[41].atomicWeight = 95.95;
elements[41].electronCount = 42;
strcpy(elements[41].electronShell, "2, 8, 18, 13, 1");
strcpy(elements[41].notes, "Transition metal.");

strcpy(elements[42].name, "Technetium");
strcpy(elements[42].symbol, "Tc");
elements[42].atomicNumber = 43;
elements[42].atomicWeight = 98;
elements[42].electronCount = 43;
strcpy(elements[42].electronShell, "2, 8, 18, 13, 2");
strcpy(elements[42].notes, "Radioactive.");

strcpy(elements[43].name, "Ruthenium");
strcpy(elements[43].symbol, "Ru");
elements[43].atomicNumber = 44;
elements[43].atomicWeight = 101.07;
elements[43].electronCount = 44;
strcpy(elements[43].electronShell, "2, 8, 18, 15, 1");
strcpy(elements[43].notes, "Transition metal.");

strcpy(elements[44].name, "Rhodium");
strcpy(elements[44].symbol, "Rh");
elements[44].atomicNumber = 45;
elements[44].atomicWeight = 102.91;
elements[44].electronCount = 45;
strcpy(elements[44].electronShell, "2, 8, 18, 16, 1");
strcpy(elements[44].notes, "Transition metal.");

strcpy(elements[45].name, "Palladium");
strcpy(elements[45].symbol, "Pd");
elements[45].atomicNumber = 46;
elements[45].atomicWeight = 106.42;
elements[45].electronCount = 46;
strcpy(elements[45].electronShell, "2, 8, 18, 18");
strcpy(elements[45].notes, "Transition metal.");

strcpy(elements[46].name, "Silver");
strcpy(elements[46].symbol, "Ag");
elements[46].atomicNumber = 47;
elements[46].atomicWeight = 107.87;
elements[46].electronCount = 47;
strcpy(elements[46].electronShell, "2, 8, 18, 18, 1");
strcpy(elements[46].notes, "Transition metal.");

strcpy(elements[47].name, "Cadmium");
strcpy(elements[47].symbol, "Cd");
elements[47].atomicNumber = 48;
elements[47].atomicWeight = 112.41;
elements[47].electronCount = 48;
strcpy(elements[47].electronShell, "2, 8, 18, 18, 2");
strcpy(elements[47].notes, "Transition metal.");

strcpy(elements[48].name, "Indium");
strcpy(elements[48].symbol, "In");
elements[48].atomicNumber = 49;
elements[48].atomicWeight = 114.82;
elements[48].electronCount = 49;
strcpy(elements[48].electronShell, "2, 8, 18, 18, 3");
strcpy(elements[48].notes, "Post-transition metal.");

strcpy(elements[49].name, "Tin");
strcpy(elements[49].symbol, "Sn");
elements[49].atomicNumber = 50;
elements[49].atomicWeight = 118.71;
elements[49].electronCount = 50;
strcpy(elements[49].electronShell, "2, 8, 18, 18, 4");
strcpy(elements[49].notes, "Post-transition metal.");

strcpy(elements[50].name, "Antimony");
strcpy(elements[50].symbol, "Sb");
elements[50].atomicNumber = 51;
elements[50].atomicWeight = 121.76;
elements[50].electronCount = 51;
strcpy(elements[50].electronShell, "2, 8, 18, 18, 5");
strcpy(elements[50].notes, "Metalloid.");

strcpy(elements[51].name, "Tellurium");
strcpy(elements[51].symbol, "Te");
elements[51].atomicNumber = 52;
elements[51].atomicWeight = 127.6;
elements[51].electronCount = 52;
strcpy(elements[51].electronShell, "2, 8, 18, 18, 6");
strcpy(elements[51].notes, "Metalloid.");

strcpy(elements[52].name, "Iodine");
strcpy(elements[52].symbol, "I");
elements[52].atomicNumber = 53;
elements[52].atomicWeight = 126.9;
elements[52].electronCount = 53;
strcpy(elements[52].electronShell, "2, 8, 18, 18, 7");
strcpy(elements[52].notes, "Halogen.");

strcpy(elements[53].name, "Xenon");
strcpy(elements[53].symbol, "Xe");
elements[53].atomicNumber = 54;
elements[53].atomicWeight = 131.29;
elements[53].electronCount = 54;
strcpy(elements[53].electronShell, "2, 8, 18, 18, 8");
strcpy(elements[53].notes, "Noble gas.");

strcpy(elements[54].name, "Cesium");
strcpy(elements[54].symbol, "Cs");
elements[54].atomicNumber = 55;
elements[54].atomicWeight = 132.91;
elements[54].electronCount = 55;
strcpy(elements[54].electronShell, "2, 8, 18, 18, 8, 1");
strcpy(elements[54].notes, "Alkali metal.");

strcpy(elements[55].name, "Barium");
strcpy(elements[55].symbol, "Ba");
elements[55].atomicNumber = 56;
elements[55].atomicWeight = 137.33;
elements[55].electronCount = 56;
strcpy(elements[55].electronShell, "2, 8, 18, 18, 8, 2");
strcpy(elements[55].notes, "Alkaline earth metal.");

strcpy(elements[56].name, "Lanthanum");
strcpy(elements[56].symbol, "La");
elements[56].atomicNumber = 57;
elements[56].atomicWeight = 138.91;
elements[56].electronCount = 57;
strcpy(elements[56].electronShell, "2, 8, 18, 18, 9, 2");
strcpy(elements[56].notes, "Lanthanide.");

strcpy(elements[57].name, "Cerium");
strcpy(elements[57].symbol, "Ce");
elements[57].atomicNumber = 58;
elements[57].atomicWeight = 140.12;
elements[57].electronCount = 58;
strcpy(elements[57].electronShell, "2, 8, 18, 19, 9, 2");
strcpy(elements[57].notes, "Lanthanide.");

strcpy(elements[58].name, "Praseodymium");
strcpy(elements[58].symbol, "Pr");
elements[58].atomicNumber = 59;
elements[58].atomicWeight = 140.91;
elements[58].electronCount = 59;
strcpy(elements[58].electronShell, "2, 8, 18, 21, 8, 2");
strcpy(elements[58].notes, "Lanthanide.");

strcpy(elements[59].name, "Neodymium");
strcpy(elements[59].symbol, "Nd");
elements[59].atomicNumber = 60;
elements[59].atomicWeight = 144.24;
elements[59].electronCount = 60;
strcpy(elements[59].electronShell, "2, 8, 18, 22, 8, 2");
strcpy(elements[59].notes, "Lanthanide.");

strcpy(elements[60].name, "Promethium");
strcpy(elements[60].symbol, "Pm");
elements[60].atomicNumber = 61;
elements[60].atomicWeight = 145;
elements[60].electronCount = 61;
strcpy(elements[60].electronShell, "2, 8, 18, 23, 8, 2");
strcpy(elements[60].notes, "Radioactive.");

strcpy(elements[61].name, "Samarium");
strcpy(elements[61].symbol, "Sm");
elements[61].atomicNumber = 62;
elements[61].atomicWeight = 150.36;
elements[61].electronCount = 62;
strcpy(elements[61].electronShell, "2, 8, 18, 24, 8, 2");
strcpy(elements[61].notes, "Lanthanide.");

strcpy(elements[62].name, "Europium");
strcpy(elements[62].symbol, "Eu");
elements[62].atomicNumber = 63;
elements[62].atomicWeight = 151.96;
elements[62].electronCount = 63;
strcpy(elements[62].electronShell, "2, 8, 18, 25, 8, 2");
strcpy(elements[62].notes, "Lanthanide.");

strcpy(elements[63].name, "Gadolinium");
strcpy(elements[63].symbol, "Gd");
elements[63].atomicNumber = 64;
elements[63].atomicWeight = 157.25;
elements[63].electronCount = 64;
strcpy(elements[63].electronShell, "2, 8, 18, 25, 9, 2");
strcpy(elements[63].notes, "Lanthanide.");

strcpy(elements[64].name, "Terbium");
strcpy(elements[64].symbol, "Tb");
elements[64].atomicNumber = 65;
elements[64].atomicWeight = 158.93;
elements[64].electronCount = 65;
strcpy(elements[64].electronShell, "2, 8, 18, 27, 8, 2");
strcpy(elements[64].notes, "Lanthanide.");

strcpy(elements[65].name, "Dysprosium");
strcpy(elements[65].symbol, "Dy");
elements[65].atomicNumber = 66;
elements[65].atomicWeight = 162.5;
elements[65].electronCount = 66;
strcpy(elements[65].electronShell, "2, 8, 18, 28, 8, 2");
strcpy(elements[65].notes, "Lanthanide.");

strcpy(elements[66].name, "Holmium");
strcpy(elements[66].symbol, "Ho");
elements[66].atomicNumber = 67;
elements[66].atomicWeight = 164.93;
elements[66].electronCount = 67;
strcpy(elements[66].electronShell, "2, 8, 18, 29, 8, 2");
strcpy(elements[66].notes, "Lanthanide.");

strcpy(elements[67].name, "Erbium");
strcpy(elements[67].symbol, "Er");
elements[67].atomicNumber = 68;
elements[67].atomicWeight = 167.26;
elements[67].electronCount = 68;
strcpy(elements[67].electronShell, "2, 8, 18, 30, 8, 2");
strcpy(elements[67].notes, "Lanthanide.");

strcpy(elements[68].name, "Thulium");
strcpy(elements[68].symbol, "Tm");
elements[68].atomicNumber = 69;
elements[68].atomicWeight = 168.93;
elements[68].electronCount = 69;
strcpy(elements[68].electronShell, "2, 8, 18, 31, 8, 2");
strcpy(elements[68].notes, "Lanthanide.");

strcpy(elements[69].name, "Ytterbium");
strcpy(elements[69].symbol, "Yb");
elements[69].atomicNumber = 70;
elements[69].atomicWeight = 173.04;
elements[69].electronCount = 70;
strcpy(elements[69].electronShell, "2, 8, 18, 32, 8, 2");
strcpy(elements[69].notes, "Lanthanide.");

strcpy(elements[70].name, "Lutetium");
strcpy(elements[70].symbol, "Lu");
elements[70].atomicNumber = 71;
elements[70].atomicWeight = 174.97;
elements[70].electronCount = 71;
strcpy(elements[70].electronShell, "2, 8, 18, 32, 9, 2");
strcpy(elements[70].notes, "Lanthanide.");

strcpy(elements[71].name, "Hafnium");
strcpy(elements[71].symbol, "Hf");
elements[71].atomicNumber = 72;
elements[71].atomicWeight = 178.49;
elements[71].electronCount = 72;
strcpy(elements[71].electronShell, "2, 8, 18, 32, 10, 2");
strcpy(elements[71].notes, "Transition metal.");

strcpy(elements[72].name, "Tantalum");
strcpy(elements[72].symbol, "Ta");
elements[72].atomicNumber = 73;
elements[72].atomicWeight = 180.95;
elements[72].electronCount = 73;
strcpy(elements[72].electronShell, "2, 8, 18, 32, 11, 2");
strcpy(elements[72].notes, "Transition metal.");

strcpy(elements[73].name, "Tungsten");
strcpy(elements[73].symbol, "W");
elements[73].atomicNumber = 74;
elements[73].atomicWeight = 183.84;
elements[73].electronCount = 74;
strcpy(elements[73].electronShell, "2, 8, 18, 32, 12, 2");
strcpy(elements[73].notes, "Transition metal.");

strcpy(elements[74].name, "Rhenium");
strcpy(elements[74].symbol, "Re");
elements[74].atomicNumber = 75;
elements[74].atomicWeight = 186.21;
elements[74].electronCount = 75;
strcpy(elements[74].electronShell, "2, 8, 18, 32, 13, 2");
strcpy(elements[74].notes, "Transition metal.");

strcpy(elements[75].name, "Osmium");
strcpy(elements[75].symbol, "Os");
elements[75].atomicNumber = 76;
elements[75].atomicWeight = 190.23;
elements[75].electronCount = 76;
strcpy(elements[75].electronShell, "2, 8, 18, 32, 14, 2");
strcpy(elements[75].notes, "Transition metal.");

strcpy(elements[76].name, "Iridium");
strcpy(elements[76].symbol, "Ir");
elements[76].atomicNumber = 77;
elements[76].atomicWeight = 192.22;
elements[76].electronCount = 77;
strcpy(elements[76].electronShell, "2, 8, 18, 32, 15, 2");
strcpy(elements[76].notes, "Transition metal.");

strcpy(elements[77].name, "Platinum");
strcpy(elements[77].symbol, "Pt");
elements[77].atomicNumber = 78;
elements[77].atomicWeight = 195.08;
elements[77].electronCount = 78;
strcpy(elements[77].electronShell, "2, 8, 18, 32, 17, 1");
strcpy(elements[77].notes, "Transition metal.");

strcpy(elements[78].name, "Gold");
strcpy(elements[78].symbol, "Au");
elements[78].atomicNumber = 79;
elements[78].atomicWeight = 196.97;
elements[78].electronCount = 79;
strcpy(elements[78].electronShell, "2, 8, 18, 32, 18, 1");
strcpy(elements[78].notes, "Transition metal.");

strcpy(elements[79].name, "Mercury");
strcpy(elements[79].symbol, "Hg");
elements[79].atomicNumber = 80;
elements[79].atomicWeight = 200.59;
elements[79].electronCount = 80;
strcpy(elements[79].electronShell, "2, 8, 18, 32, 18, 2");
strcpy(elements[79].notes, "Transition metal.");

strcpy(elements[80].name, "Thallium");
strcpy(elements[80].symbol, "Tl");
elements[80].atomicNumber = 81;
elements[80].atomicWeight = 204.38;
elements[80].electronCount = 81;
strcpy(elements[80].electronShell, "2, 8, 18, 32, 18, 3");
strcpy(elements[80].notes, "Post-transition metal.");

strcpy(elements[81].name, "Lead");
strcpy(elements[81].symbol, "Pb");
elements[81].atomicNumber = 82;
elements[81].atomicWeight = 207.2;
elements[81].electronCount = 82;
strcpy(elements[81].electronShell, "2, 8, 18, 32, 18, 4");
strcpy(elements[81].notes, "Post-transition metal.");

strcpy(elements[82].name, "Bismuth");
strcpy(elements[82].symbol, "Bi");
elements[82].atomicNumber = 83;
elements[82].atomicWeight = 208.98;
elements[82].electronCount = 83;
strcpy(elements[82].electronShell, "2, 8, 18, 32, 18, 5");
strcpy(elements[82].notes, "Post-transition metal.");

strcpy(elements[83].name, "Polonium");
strcpy(elements[83].symbol, "Po");
elements[83].atomicNumber = 84;
elements[83].atomicWeight = 209;
elements[83].electronCount = 84;
strcpy(elements[83].electronShell, "2, 8, 18, 32, 18, 6");
strcpy(elements[83].notes, "Radioactive.");

strcpy(elements[84].name, "Astatine");
strcpy(elements[84].symbol, "At");
elements[84].atomicNumber = 85;
elements[84].atomicWeight = 210;
elements[84].electronCount = 85;
strcpy(elements[84].electronShell, "2, 8, 18, 32, 18, 7");
strcpy(elements[84].notes, "Radioactive.");

strcpy(elements[85].name, "Radon");
strcpy(elements[85].symbol, "Rn");
elements[85].atomicNumber = 86;
elements[85].atomicWeight = 222;
elements[85].electronCount = 86;
strcpy(elements[85].electronShell, "2, 8, 18, 32, 18, 8");
strcpy(elements[85].notes, "Radioactive.");

strcpy(elements[86].name, "Francium");
strcpy(elements[86].symbol, "Fr");
elements[86].atomicNumber = 87;
elements[86].atomicWeight = 223;
elements[86].electronCount = 87;
strcpy(elements[86].electronShell, "2, 8, 18, 32, 18, 8, 1");
strcpy(elements[86].notes, "Radioactive.");

strcpy(elements[87].name, "Radium");
strcpy(elements[87].symbol, "Ra");
elements[87].atomicNumber = 88;
elements[87].atomicWeight = 226;
elements[87].electronCount = 88;
strcpy(elements[87].electronShell, "2, 8, 18, 32, 18, 8, 2");
strcpy(elements[87].notes, "Radioactive.");

strcpy(elements[88].name, "Actinium");
strcpy(elements[88].symbol, "Ac");
elements[88].atomicNumber = 89;
elements[88].atomicWeight = 227;
elements[88].electronCount = 89;
strcpy(elements[88].electronShell, "2, 8, 18, 32, 18, 9, 2");
strcpy(elements[88].notes, "Radioactive.");

strcpy(elements[89].name, "Thorium");
strcpy(elements[89].symbol, "Th");
elements[89].atomicNumber = 90;
elements[89].atomicWeight = 232.04;
elements[89].electronCount = 90;
strcpy(elements[89].electronShell, "2, 8, 18, 32, 18, 10, 2");
strcpy(elements[89].notes, "Radioactive.");

strcpy(elements[90].name, "Protactinium");
strcpy(elements[90].symbol, "Pa");
elements[90].atomicNumber = 91;
elements[90].atomicWeight = 231.04;
elements[90].electronCount = 91;
strcpy(elements[90].electronShell, "2, 8, 18, 32, 20, 9, 2");
strcpy(elements[90].notes, "Radioactive.");
    // Element 90: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 91: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 92: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 93: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 94: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 95: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 96: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 97: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 98: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 99: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 100: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 101: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 102: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 103: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 104: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 105: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 106: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 107: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 108: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 109: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 110: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 111: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 112: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 113: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 114: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 115: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 116: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 117: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 118: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, "");
    // Element 119: 
    strcpy(elements[].name, "");
    strcpy(elements[].symbol, "");
    elements[].atomicNumber = ;
    elements[].atomicWeight = ;
    elements[].electronCount = ;
    strcpy(elements[].electronShell, "");
    strcpy(elements[].notes, ""); */
}