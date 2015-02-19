// Header file for coin that is a derived-class of aRandomNumberGenerator

#ifndef COIN_H
#define COIN_H

#include <iostream>
#include "aRandomNumberGenerator.h"
using namespace std;

class aCoin : public aRandomNumberGenerator
{
public:
	aCoin(int heads = 0, int tails = 1);
	int flip() const;
};


#endif