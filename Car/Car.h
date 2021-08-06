
#pragma once
class Car
{
	int size;
	char* brand;
	double enginVolume;
	int clearence;
	static int count;// количество созданых обьектовж
public:
	Car();
	~Car(); ///деструктор
	Car(const char* brand, double vol, int clear);
	const char* getBrand() { return brand; }
	double getVolume() { return enginVolume; }
	int getClearence() { return clearence; }
	static int getCount() { return count; }
};
Car* findBrand(Car* cars, int size, const char* brand);