#include "TV.h"

TV::TV() {
	this->power_ = OFF;
	this->channel = 1;
}

void TV::power() {
	if (power_ == OFF) {
		cout << "Turning ON the TV\n";
		Sleep(400);
		this->power_ = ON;
		return;
	}
	if (power_ == ON) {
		cout << "Turning OFF the TV\n";
		Sleep(400);
		this->power_ = OFF;
	}
}


void TV::changeChannel(int channel) {
	this->channel = channel;
	cout << "TV channel set to " << channel << endl;
	Sleep(400);
}

bool TV::getPower() {
	return this->power_;
}
int TV::getChannel() {
	return this->channel;
}