class wings {
	string pizzaStore;
	bool takeout;
	int dozens;
	string sauce;
	bool veggies;
	bool blueCheese;
	public:
		wings ( void ) {
		this->sauce = "plain wings";
	}
	wings ( string pizzaStore, int dozens, string sauce, bool takeout, bool veggies, bool blueCheese )
		this->sauce = sauce;
	}
	string setsauce( string gettinSpicey ) {
		this->sauce = gettinSpicey;
		return gettinSpicey;
	}
};
	wings orderOne("[ ASPECT ] Pizza Shoppe", 1, "Mango Habenero", true, true, true)




	void print(void) {
			std::cout << "\t" << "Wing Shope:" << pizzaShop << "Customer ordered " << slices << ". Requested " << toppings << " and " << takeout << "\n";
			if (takeout) cout << " is a takeout order. \n";
			else cout << " is not a takeout order. \n";
		}
		
	order1.print();
	order2.print();
	order3.print();
	order4.print();