// Implementation of aCoin.h

#include <iostream>
#include "aCoin.h"
using namespace std;

// Constructors -------------------------------------------
aCoin::aCoin(int heads, int tails)
	//explicit call to aRandomNumberGenerator class constructor
	: aRandomNumberGenerator(heads, tails) //sets from default arguments in header
{
	
}
//---------------------------------------------------------

int aCoin::flip() const
{
	return generate();
}