#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Book
{
	static const int size = 100;
	char author[size];
	char title[size];
	char publisher[size];
	int year;
	int pages;
public:
	Book(const char* author, const char* title, const char* publisher, int year, int page)
	{
		strcpy_s(this->author, author);
		strcpy_s(this->title, title);
		strcpy_s(this->publisher, publisher);
		this->year = year;
		this->pages = pages;
	}
	void print()const {  /// метод вывода в консоль 
		cout << author << " " << title << endl;
	}
	const char* getAuthor() const {
		return author;

	}
	const char* getpublisher() const {
		return publisher;

	}
	int  getYear() const {
		return year;

	}

};
void printAuthor(const Book books[], int size, const char* author);
void printpublisher(const Book books[], int size, const char* publisher);
void printAfterYear(const Book books[], int size, int year);