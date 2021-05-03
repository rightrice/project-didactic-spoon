#include <iostream>
#include <lcg.hpp>

using namespace std;

class GraphicsCards {
	public:
		string manufacturer;
		string name;
		int model;
		string chipset;
		bool price;
		GraphicsCards( string aManufacturer, string aName, int aModel, string aChipset, bool overUnderValued) {
			manufacturer = aManufacturer;
			name = aName;
			model = aModel;
			chipset = aChipset;
			price = overUnderValued;
		}
		void print(void) {
			std::cout << "\t" << manufacturer << " makes the " << name << " " << model << " graphics card" << " and uses the " << chipset << " chipset " << "and " << price << "\n";
			if (price) cout << " is overpriced. " << "\n";
			else cout << " is not overpriced. " << "\n";
		}
};
int main ( void ) {
	GraphicsCards one("AMD", "Radeon", 5700, "Navi", false);
	GraphicsCards two("Nvidia", "RTX", 3080, "Ampere", true);
	GraphicsCards three("AMD", "Radeon", 6800, "... idk, AMD dropped the ball on these cards", true);
	one.print( );
	std::cout << "\n";
	two.print();
	std::cout << "\n";
	three.print();
};


