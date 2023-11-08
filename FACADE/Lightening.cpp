#include "Lightening.h"

Lightening::Lightening() {
	this->brightness = 0;
}

void Lightening::setBrightness(int brightness) {
	if (brightness < 0) {
		this->brightness = 0;
		return;
	}
	if (brightness > 100) {
		this->brightness = 100;
		return;
	}
	this->brightness = brightness;
}