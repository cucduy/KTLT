#include <string>
#include <iostream>
using namespace std;
#pragma once

class Vehicle {
protected:
	string mfgName; //ten NSX
	float dealerCost; //gia von
	string VIN; //so khung
	string engineNumber; //so may
public:
	Vehicle(string mfgName = "", float dealerCost = 0.0);
	float retailPrice();

	string getMfgName();
	float getDealerCost();
	string getVIN(); //them
	string getEngineNumber(); //them
	void setMfgName(string mfgName);
	void setDealerCost(float dealerCost);
	void setVIN(string VIN); //them
	void setEngineNumber(string engineNumber); //them
	~Vehicle(void);

	friend istream& operator>>(istream& is, Vehicle& v);
	friend ostream& operator<<(ostream& os, const Vehicle& v);
};

Vehicle::Vehicle(string mfgName, float dealerCost) {
	this->setMfgName(mfgName);
	this->setDealerCost(dealerCost);
}
float Vehicle::retailPrice() {
	return this->getDealerCost() + this->getDealerCost() * 20 / 100;
}

string Vehicle::getMfgName() {
	return this->mfgName;
}
float Vehicle::getDealerCost() {
	return this->dealerCost;
}
string Vehicle::getVIN() {
	return this->VIN;
}
string Vehicle::getEngineNumber() {
	return this->engineNumber;
}
void Vehicle::setMfgName(string mfgName) {
	this->mfgName = mfgName;
}
void Vehicle::setDealerCost(float dealerCost) {
	this->dealerCost = dealerCost;
}
void Vehicle::setVIN(string VIN) {
	this->VIN = VIN;
}
void Vehicle::setEngineNumber(string engineNumber) {
	this->engineNumber = engineNumber;
}
Vehicle::~Vehicle(void) {
	//
}

istream& operator>>(istream& is, Vehicle& v) {
	cout << "Nhap ten nha san xuat (MFG Name): ";
	is >> ws; getline(is, v.mfgName);

	cout << "Nhap gia von (Dealer Cost): ";
	is >> v.dealerCost;

	return is;
}

ostream& operator<<(ostream& os, const Vehicle& v) {
	os << "Manufacturer Name: " << v.mfgName << endl;
	return os;
}
