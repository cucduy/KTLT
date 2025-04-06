#include "Vehicle.h"
#pragma once
class Car : public Vehicle {
protected:
	string modelName; //Ten kieu
	bool sunroof; //is Co CuaMai?

public:
	Car(
		string mfgName = "",
		float dealerCost = 0.0,
		string modelName = "",
		bool sunroof = true
	);
	float retailPrice();

	string getModelName();
	bool getSunroof();
	void setModelName(string modelName);
	void setSunroof(bool sunroof);
	~Car(void);

	friend istream& operator>>(istream& is, Car& c);
	friend ostream& operator<<(ostream& os, const Car& c);
};

Car::Car(
	string mfgName,
	float dealerCost,
	string modelName,
	bool sunroof
) : Vehicle(mfgName, dealerCost) {
	this->setModelName(modelName);
	this->setSunroof(sunroof);
}
float Car::retailPrice() {
	return this->getDealerCost() + this->getDealerCost() * 25 / 100;
}

string Car::getModelName() {
	return this->modelName;
}
bool Car::getSunroof() {
	return this->sunroof;
}
void Car::setModelName(string modelName) {
	this->modelName = modelName;
}
void Car::setSunroof(bool sunroof) {
	this->sunroof = sunroof;
}
Car::~Car(void) {
	//
}

istream& operator>>(istream& is, Car& c) {
	is >> (Vehicle&)c;

	cout << "Nhap ten kieu (Model Name): ";
	is >> ws; getline(is, c.modelName);

	cout << "La Xe co CuaMai? (Sunrootf): ";
	is >> c.sunroof;

	return is;
}

ostream& operator<<(ostream& os, const Car& c) {
	os << (Vehicle&)c;
	os << "Model Name: " << c.modelName << endl;
	os << "Has Sunroof: " << (c.sunroof ? "Yes" : "No") << endl;
	return os;
}