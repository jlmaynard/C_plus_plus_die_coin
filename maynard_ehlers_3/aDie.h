// Inherits from aRandomNumberGenerator

#ifndef ADIE_H
#define ADIE_H

#include <iostream>
#include "aRandomNumberGenerator.h"
using namespace std;

class aDie : public aRandomNumberGenerator
{
public:
	aDie(int lownumber = 1, int highNumber = 6); 
	int throwDie() const; 
};

#endif