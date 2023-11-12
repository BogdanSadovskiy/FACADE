#include "Conditioner.h"

Conditioner::Conditioner() {
	power_ = OFF;
	srand((unsigned)time(NULL));
	this->HomeTemp = 15 + (rand() % 16);
	
}
void Conditioner::power() {
	if (power_ == ON) {
		cout << "Powering OFF conditioner system\n";
		Sleep(400);
		this->power_ = OFF;
	}
	if (power_ == OFF) {
		cout << "Powering ON conditioner system\n";
		setTemp();
		Sleep(400);
		this->power_ = ON;
	}
}

void Conditioner::setHomeTemp() {
	int n; n = rand() % 12;
	if (n == 4) {
		cout << "Someone just opened the window\n";
		Sleep(400);
		this->HomeTemp = HomeTemp - 4;
	}

	if (this->HomeTemp > this->condTemp) {
		HomeTemp--;
	}
	if (this->HomeTemp < this->condTemp) {
		HomeTemp++;
	}

}
void Conditioner::setTemp() {
	if (this->HomeTemp > 25) {
		this->condTemp = 16;
	}
	else if (this->HomeTemp < 17) {
		this->condTemp = 22;
	}
	else {
		this->condTemp = 18;
	}
	
}

bool Conditioner :: getPower() {
	return this->power_;
}

int Conditioner::getTemp() {
	return this->condTemp;
}
int Conditioner::getHomeTemp() {
	return this->HomeTemp;
}