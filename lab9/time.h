#pragma once
#include "iostream"

class time
{
	private:
	long hours;
	unsigned char minutes;
public:
	void setTime(long newHours, unsigned char newMinutes);
	long getHours();
	unsigned char getMinutes();
	time operator+ (time& plusTime);
	time operator- (time& minusTime);
	time operator* (int mulTimes);
	void Result();
};