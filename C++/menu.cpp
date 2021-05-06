#include <iostream>

using namespace std;

class Menu {
	public: string name;
	public: int number;
	public: display (void) { 
		cout << game1 << " is and " << number << " " << endl;
		}
};

int main ( void ) {
	Menu main;
	Menu game1;
	game1.number = 1;
	game1.name = "Tic-Tac-Toe";
};