#include "Lightening.h"

Lightening::Lightening() {
	this->brightness = 0;
}

void Lightening::setBrightness(int brightness) {
	this->brightness = brightness;
	cout << "Lightening set to " << brightness << endl;
	Sleep(400);
}

int Lightening::getBrightness() {
	return this->brightness;
}