#include<iostream>
#include "Car.h"
using namespace std;

void f() {
	Car automobiles[4]{ Car("lada",2.3,16), Car("audi",3.0,13),
		Car("toyata", 2.7,14), Car("lada",1.7,17)
	};

	Car* c = automobiles;

	while ((c = findBrand(c, automobiles + 4 - c, "lada")) != nullptr) {

		cout << c->getBrand() << " " << c->getVolume() << " " << c->getClearence() << endl;
		++c;
	}

}


int main() {


	for (int i = 0; i < 1000; i++) {
		f();
	}
	cout << Car::getCount();

}