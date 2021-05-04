#include <iostream>
using namespace std;

class A {
	public: int aPub;
	protected: int aProt;
	private: int aPriv;
	public: void aDoopDeDoo(void) {
		cout << "class: A aPub: " << aPub << endl;
		cout << "class: A aProt: " << aProt << endl;
		cout << "class: A aPriv: " << aPriv << endl;
	}
};

class B : public A {
	public: void bDoopDeDoo(void) {
		cout << "Class B " << aPub << endl;
	}
};

class C {

};

int main(void){
	A aObj;
	cout << aObj.aPub << endl;
//	cout << aObj.aProt << endl;
//	cout << aObj.aPriv << endl;
	B bObj;
	cout << bObj.aPub << endl;
	aObj.aDoopDeDoo();
	bObj.bDoopDeDoo();

}