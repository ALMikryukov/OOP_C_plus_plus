#include<iostream>
#include"Book.h"
using namespace std;


void printAuthor(const Book books[], int size, const char* author) {
	for (int i = 0; i < size; i++) {
		if (strcmp(books[i].getAuthor(), author) == 0) {
			books[i].print();

		}
	}
}
void printpublisher(const Book books[], int size, const char* publisher) {
	for (int i = 0; i < size; i++) {
		if (strcmp(books[i].getpublisher(), publisher) == 0) {
			books[i].print();

		}
	}
}
void printAfterYear(const Book books[], int size, int year) {
	for (int i = 0; i < size; i++) {
		if (books[i].getYear() > year) {
			books[i].print();
			cout << endl;
		}
	}
}