#pragma once
#include <iostream>
#include <string>

class knigi
{
public:
	std::string name;
	int year;

	void set_name(const char * new_name);
	void set_year(const int new_year);
	void get_info();
};

void knigi::set_name(const char * new_name)
{
	this->name=new_name;
	return;
}
void knigi::set_year(const int new_year)
{
	this->year=new_year;
	return;
}
void knigi::get_info()
{
	cout<< this->name<< "("<<this->year<<")";
return;
}




	


