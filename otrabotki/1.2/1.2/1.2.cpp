#include <iostream>
#include <fstream>
#include <string>
#include "money.h"
int main()
{
	int data[4];
	std::ifstream myfile("data.txt");

	for (int i = 0; i < 4; i++)
	{
		myfile >> data[i];

	}
	myfile.close();


	money one;
	one.set(data[0], data[1]);
	money two;
	two.set(data[2], data[3]);
	money three = one + two;
	three.print();
	three = one - two;
	three.print();
	three = one * 3;
	three.print();
	return 0;
}
