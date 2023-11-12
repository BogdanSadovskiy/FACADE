#pragma once
#include"TV.h"
#include "Lightening.h"
#include "Conditioner.h"
#include<string>

class SmartHouse
{
private:
	TV* TV_;
	Conditioner* conditioner;
	Lightening* lightening;
public:
	SmartHouse();

	void TVManage();
	void ConditionerManage();
	void LeaveHome();
	void display();
};

