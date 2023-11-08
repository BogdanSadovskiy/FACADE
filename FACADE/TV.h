#pragma once
using namespace std;
#include<iostream>
#define ON true
#define OFF false
class TV
{
private:
	bool power;
	int channel;
public:
	TV();
	void powerON() ;
	void powerOFF();
	void changeChannel(int channel, bool& correctChannel);
};

