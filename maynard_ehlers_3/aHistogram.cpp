// aHistogram.cpp class implementation
// This histogram class uses an internal vector (_v1)
// Returns a vector for printing 
// Per professor, this class is not to print histogram

#include <iostream>
#include <vector>
#include "aHistogram.h"
using namespace std;

// Constructors 
aHistogram::aHistogram(int low, int high) //default
{	
	setRange(low, high);
}

// Destructor
aHistogram::~aHistogram()
{
	//empty for now
}
	
// Reset histogram data to zero
void aHistogram::clear()
{
	_v1.clear(); //clear the private data member vector
}

void aHistogram::update(int n)
{
	// Takes a new number and adds it to the internal vector
	_v1.push_back(n); 
	_frequency.at(n)++; //increment counter for the number in question
}

int aHistogram::count(int randomNumber) const
{
	return _frequency.at(randomNumber);
}

void aHistogram::setRange(int low, int high)
{
	// Set private data member variables from user arguments low, high
	_low = low;
	_high = high;
	// set size of counter
	// add 1 to skip element zero and align bins 
	// (i.e., rolling a 1 gets stored in vector element 1)
	_frequency.resize(high+1); 
}

vector<int> & aHistogram::getCountVector()
{
	return _frequency; // returns the whole count vector
}
