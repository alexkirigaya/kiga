#pragma once

class money
{
private:
	long rubley;
	unsigned char kopeek;
public:
	void set(int newRubley, int newKopeek);
	long getRubley() { return rubley; };
	unsigned char getKopeek() { return kopeek; };
	money operator+(money& plusTime);
	money operator-(money& plusTime);
	money operator*(const int& plusTime);
	void print();
};