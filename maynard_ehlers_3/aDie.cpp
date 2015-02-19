#include <iostream>
#include "aDie.h"
using namespace std;

// Constructors -------------------------------------------
aDie::aDie(int lowNumber, int highNumber) 
	//explicit call to aRandomNumberGenerator class constructor
	: aRandomNumberGenerator(lowNumber, highNumber) //sets 1-6 from default arguments in header
{
	 
}
//---------------------------------------------------------

int aDie::throwDie() const
{
	return generate();
}