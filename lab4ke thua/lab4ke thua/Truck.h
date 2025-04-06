#include "Vehicle.h"
#pragma once
class Truck : public Vehicle {
protected:
	double capacity; //Suc chua (dv: tan)
	bool automaticTransmission; //is Co BoTruyenLucTuDong?

public:
	Truck(
		string mfgName = "",
		float dealerCost = 0.0,
		double capacity = 0.0,
		bool automaticTransmission = true
	);
	float retailPrice();

	double getCapacity();
	bool getAutomaticTransmission();
	void setCapacity(double modelName);
	void setAutomaticTransmission(bool automaticTransmission);
	~Truck(void);

	friend istream& operator>>(istream& is, Truck& t);
	friend ostream& operator<<(ostream& os, const Truck& t);
};

Truck::Truck(
	string mfgName,
	float dealerCost,
	double capacity,
	bool automaticTransmission
) :Vehicle(mfgName, dealerCost) {
	this->setCapacity(capacity);
	this->setAutomaticTransmission(automaticTransmission);
}
float Truck::retailPrice() {
	if (this->getCapacity() <= 10) {
		return this->getDealerCost() + this->getDealerCost() * 20 / 100;
	}
	else {
		return this->getDealerCost() + this->getDealerCost() * 25 / 100;
	}
}

double Truck::getCapacity() {
	return this->capacity;
}
bool Truck::getAutomaticTransmission() {
	return this->automaticTransmission;
}
void Truck::setCapacity(double capacity) {
	this->capacity = capacity;
}
void Truck::setAutomaticTransmission(bool automaticTransmission) {
	this->automaticTransmission = automaticTransmission;
}
Truck::~Truck(void) {
	//
}


istream& operator>>(istream& is, Truck& t) {
	is >> (Vehicle&)t;

	cout << "Nhap suc chua (Capacity): ";
	is >> t.capacity;

	cout << "La Xe co BoTruyenLucTuDong? (automaticTransmission): ";
	is >> t.automaticTransmission;

	return is;
}

ostream& operator<<(ostream& os, const Truck& t) {
	os << (Vehicle&)t;
	os << "Capacity: " << t.capacity << " tons" << endl;
	os << "Automatic Transmission: " << (t.automaticTransmission ? "Yes" : "No") << endl;
	return os;
}