#include "SmartHouse.h"
SmartHouse::SmartHouse() {
	this->conditioner = new Conditioner();
	this->lightening = new Lightening();
	this->TV_ = new TV();
	this->conditioner->power();
	this->lightening->setBrightness(70);
}


void SmartHouse::TVManage() {
	srand(time(NULL));
	int n = (rand() % 20);
	if (n > 1 && n < 16 && this->TV_->getPower()) {
		int ch = 1 + (rand() % 30);
		this->TV_->changeChannel(ch);

	}
	else if ( n == 1) {
		this->TV_->power();
		if (this->TV_->getPower()) {
			this->lightening->setBrightness(15);
			int ch = 1 + (rand() % 30);
			this->TV_->changeChannel(ch);
		}
		else {
			this->lightening->setBrightness(70);
		}
	}
}

void SmartHouse::ConditionerManage() {
	this->conditioner->setHomeTemp();
	this->conditioner->setTemp();


}

void SmartHouse::LeaveHome() {
	if (this->TV_->getPower()) {
		this->TV_->power();
	}
	this->lightening->setBrightness(0);
	this->conditioner->power();
}

void SmartHouse::display() {
	string date;
	cout << "\n--------------------------------\n";
	date = "Light brightness - " + to_string(this->lightening->getBrightness()) + "\n";
	date += "TV - ";
	if (!TV_->getPower()) {
		date += "OFF\n";
	}
	else {
		date += to_string(this->TV_->getChannel()) + "\n";
	}
	date += "Conditioner temperature - " + to_string(this->conditioner->getTemp()) + "\n";
	date += "Inside temperature - " + to_string(this->conditioner->getHomeTemp()) + "\n";
	cout << date;
	cout << "--------------------------------\n";
}