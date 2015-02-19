// Jason Maynard
// Cody Ehlers
// Project 3, Object Oriented Design 12/7/2012

#include <iostream>
#include <iomanip>
#include <vector>
#include "aHistogram.h"
#include "aCoin.h"
#include "aDie.h"
using namespace std;

int main()
{
	//int seed;	
	//cout << "Please enter a seed number: " << endl; 
	//cin >> seed;
	//srand(seed);

	aCoin coinObject;
	for (int i=0; i<10; i++)
	{
		cout << "Flip coin: " << coinObject.flip() << endl; 
	}

	aDie dieObject;
	for (int i=0; i<10; i++)
	{
		cout << "Throw die: " << dieObject.throwDie() << endl; 
	}

}//end main

