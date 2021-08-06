#include<iostream>
#include"Book.h"
using namespace std;
int main() {

	Book books[] = {
		Book("Pushkin","Skazka", "Eksmo",2010,100),
		Book("Tolstoy","War & Peace", "Eksmo",2012,3000),
		Book("Pushkin","Capitans daughter", "Drofa",2020,300),
		Book("Gogol","Dead souls", "Drofa",2015,400)
	};
	cout << "Author:  Pushkin " << endl;
	printAuthor(books, 4, "Pushkin");


}