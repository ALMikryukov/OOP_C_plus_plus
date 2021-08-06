
#include<cstring>
#include "Vector.h"
Car::Car(const char* br, double vol, int clear)
	: size(strlen(br) + 1), brand{
	new char[size] }, enginVolume{ 0.0 }, clearence{ 0 }
{
	int size = strlen(br) + 1;
	strcpy_s(brand, size, br);
	++count;

}
Car:: ~Car() { //тело диструктора
	delete[]  brand;
}
Car* findBrand(Car* cars, int size, const char* brand)

{
	for (int i = 0; i < size; i++) {
		int cmp = strcmp(cars[i].getBrand(), brand);
		if (cmp == 0) {
			return &cars[i];
		}
	}
	return nullptr;
}
Car::Car() :size{ 0 }, brand{ nullptr }, enginVolume{ 0.0 }, clearence{ 0 } //иницилизатор по умолчанию
{
	++count;
}
int Car::count = 0;///иницилизация статического поля