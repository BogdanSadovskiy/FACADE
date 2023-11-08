#pragma once
#include "TV.h"
class Conditioner
{
private:
	bool power;
	int temp;
public:
	Conditioner();
	void powerON();
	void powerOFF();
	void changeTemp(int temp);
};

