// Header file for class definition
// Object Oriented Design 
// Project1 - Random number class
// Students: Jason Maynard, Cody Ehlers
#include <iostream>
using namespace std;

#ifndef RANDOM_NUMBER_GENERATOR_H
#define RANDOM_NUMBER_GENERATOR_H
class aRandomNumberGenerator
{
public:
	// Constructor with default arguments setting low and high to 0,1
	aRandomNumberGenerator(int lowNumber = 0, int highNumber = 1);
	~aRandomNumberGenerator();

	int generate() const;
	void setRange(int lowNumber, int highNumber);
	int getHighNumber() const; 
	int getLowNumber() const; 

private:
	int _lowNumber; // _underscore in front of name means its a private class data member
	int _highNumber;
};
#endif
