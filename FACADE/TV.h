#pragma once
using namespace std;
#include<iostream>
#include<Windows.h>
#include <string>
#define ON true
#define OFF false
class TV
{
private:
	bool power_;
	int channel;
public:
	TV();
	void power() ;
	void changeChannel(int channel);
	bool getPower();
	int getChannel();
};

