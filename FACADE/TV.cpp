#include "TV.h"

TV::TV() {
	this->power = OFF;
	this->channel = 1;
}

void TV::powerON() {
	this->power = ON;
}

void TV::powerOFF() {
	this->power = OFF;
}

void TV::changeChannel(int channel, bool& correctChannel) {
	if (channel < 1 || channel > 30) {
		cout << "Incorrect channel\n";
		correctChannel = false;
		return;
	}
	this->channel = channel;
}