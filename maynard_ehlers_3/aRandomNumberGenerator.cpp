// C++ file for method definitions for 
// class aRandomNumberGenerator
// Object Oriented Design 
// Project1 - Random number class
// Students: Jason Maynard, Cody Ehlers


#include <iostream>
#include "aRandomNumberGenerator.h"
using namespace std;

// "The default constructor should set the low and high range to 0,1"
aRandomNumberGenerator::aRandomNumberGenerator(int lowNumber, int highNumber)
{
	  
	// Call setRange for data hiding and validation
	setRange(lowNumber, highNumber); 
}
// Destructor
aRandomNumberGenerator::~aRandomNumberGenerator()
{
	
}

int aRandomNumberGenerator::generate() const
{
	// Add _low to random numbers so we don't start counting at zero
	// Range is member variables _high - _low + 1
	// need to add one to range because requirement is to be inclusive
	// example 9 - 1 = 8 but random numbers need to be inclusive of 
	// 9 and 1 so the range needs to be a total of 9 numbers
	// therefore 8 + 1 = 9
	return _lowNumber + rand() % (_highNumber - _lowNumber + 1);  
}
	
// provide a method called setRange(int low, int high)
void aRandomNumberGenerator::setRange(int lowNumber, int highNumber)
{
	_lowNumber = lowNumber;
	_highNumber = highNumber;
}

int aRandomNumberGenerator::getHighNumber() const
{
	return _highNumber;
}
 
int aRandomNumberGenerator::getLowNumber() const
{
	return _lowNumber;
}
