#pragma once
#include "TV.h"
#include<cstdlib>
class Conditioner
{
private:
	bool power_;
	int condTemp;
	int HomeTemp;
public:
	Conditioner();
	void setHomeTemp();
	void power();
	void setTemp();
	bool getPower();
	int getTemp();
	int getHomeTemp();

};

