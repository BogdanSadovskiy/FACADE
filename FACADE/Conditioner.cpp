#include "Conditioner.h"
Conditioner::Conditioner() {
	power = OFF;
	this->temp = 19;
}
void Conditioner::powerON() {
	this->power = ON;
}
void Conditioner::powerOFF() {
	this->power = OFF;
}
void Conditioner::changeTemp(int temp) {
	if (temp < 16) {
		this->temp = 16;
		return;
	}
	if (temp > 26) {
		this->temp = 26;
		return;
	}
	this->temp = temp;
}
