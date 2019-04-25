#pragma once
#include "stdafx.h"
#include "time.h"
#include <iostream>


using namespace std;
int maxMinutes= 60;
void time::setTime(long newHours, unsigned char newMinutes)
	{
		hours = newHours;
		minutes = newMinutes;
	}
long time::getHours()
	{
		return this -> hours;
	}
unsigned char time::getMinutes()
{
	return this -> minutes;
}

	time time:: operator+ (time& plusTime){
	
	time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	if (result.minutes >= maxMinutes){
		result.hours++;
		result.minutes -= maxMinutes;
	}
	return result;
}
time time:: operator- (time& minusTime){
	time result;
	result.hours=this->hours-minusTime.hours;
	int mins;
	mins=this->minutes-minusTime.minutes;
	if (mins < 0){
		result.hours--;
		mins += maxMinutes;
	}
	result.minutes=mins;
	return result;
	}
time time:: operator * (int mulTimes){

	time result;
	unsigned char resMin;

	result.hours = this ->hours*mulTimes;
	result.minutes = this -> minutes*mulTimes;

	resMin = result.minutes / maxMinutes;
	result.hours += (int) resMin;

	while (result.minutes >= maxMinutes)
		result.minutes -= maxMinutes;

	return result;
}

void time::Result(){
	cout << this -> hours << " hours " << (int)this -> minutes << " minute " << endl;
}
int main()
{
	time a, b, plus, minus, mul;
	int valueMul = 2.05;
	a.setTime(2,59);
	b.setTime(2,34);

	plus= a+b;
	minus = a-b;
	mul = a*valueMul;
	plus.Result();
	minus.Result();
	mul.Result();
}