#include <iostream>
#include "lcg.hpp"
#include <ciso646>
using namespace std;

class pizza {
	public:
		string pizzaStore;
		bool takeout;
		int slices;
		string toppings;
		pizza ( void ) {
		this->toppings = "plain jane cheese";
		LCG randy;
	}
	pizza ( string pizzaStore, int slices, string toppings, bool takeout ){
		this->pizzaStore = pizzaStore;
		this-> takeout = takeout;
		this-> slices = slices;
		this->toppings = toppings;
	}
	string settoppings( string extraFlava ) {
		this->toppings = extraFlava;
		return extraFlava;
	}
	void print(void) {
			std::cout << "\t" << "Pizza Store:" << pizzaStore << ". Customer ordered " << slices << " slices and wants " << toppings << ". It  " << takeout << "\n";
			if (takeout) cout << "\tis a takeout order. \n\n";
			else cout << "\tis not a takeout order. \n\n";
		}
};
class wings {
	public:
		string pizzaShop;
		bool orderin;
		int dozens;
		string sauce;
		bool veggies;
		bool blueCheese;

		wings ( void ) {
		this->sauce = "plain wings";
	}
	wings ( string pizzaShop, int dozens, string sauce, bool orderin, bool veggies, bool blueCheese ){
		this->pizzaShop=pizzaShop;
		this->dozens=dozens;
		this->orderin=orderin;
		this->sauce=sauce;
		this->veggies=veggies;
		this->blueCheese=blueCheese;
	}
	string setsauce( string gettinSpicey ) {
		this->sauce = gettinSpicey;
		return gettinSpicey;
	}
	void print(void) {
			std::cout << "\t" << "Pizza Store:" << pizzaShop << ". Customer ordered " << dozens << " wings and wants " << sauce << " sauce. The order " << orderin << ". They"<< veggies << blueCheese << "\n";
			if (orderin) cout << "is a takeout order.";
			else cout << "is not a takeout order.";
			if (veggies) cout << "do want veggies.";
			else cout << "do not want veggies.";
			if (blueCheese) cout << "do want Blue Cheese. \n\n";
			else cout << "want Ranch instead. \n\n";
		}
};
int main( ) {
	pizza orderOne("[ ASPECT ] Pizza Shoppe", 2, "Ham and Pineapple", true);
	pizza orderTwo("[ ASPECT ] Pizza Shoppe", 1, "Buff Chix Wanggg", true);
	pizza orderThree("[ ASPECT ] Pizza Shoppe", 10, "Cheese/Pepperoni", false);
	wings order1("[ ASPECT ] Pizza Shoppe", 1, "Mango Habenero", true, true, true);
	wings order2("[ ASPECT ] Pizza Shoppe", 1, "Honey BBQ", false, false, true);
	wings order3("[ ASPECT ] Pizza Shoppe", 2, "Medium/Tennesee Hot", false, true, false);
	wings order4("[ ASPECT ] Pizza Shoppe", 7, "Texas Heat", false, false, false);
	LCG potLuck;
	cout << potLuck.next(1,3,true) << endl;
/*	orderOne.print();
	orderTwo.print();
	orderThree.print();
	order1.print();
*/	order2.print();
}
