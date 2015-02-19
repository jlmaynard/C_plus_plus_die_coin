// Jason Maynard
// Cody Ehlers
// Project 3, Object Oriented Design 12/7/2012

#include <iostream>
#include <iomanip>
#include <vector>
#include "aCoin.h"
#include "aDie.h"
#include "aHistogram.h"
#include "utility.h"
using namespace std;

int main()
{
	int seed;	
	cout << "Please enter a seed number: " << endl; 
	cin >> seed;
	srand(seed);
	
	//----------------------------------------------------------------
	// Die 
	//----------------------------------------------------------------

	// create die object
	aDie d1;
	
	cout << "How many times do you want to throw the die?" << endl; 
	int numThrows;
	cin >> numThrows;
	cout << endl; 
	
	// create histogram object
	aHistogram dieHistogram(d1.getLowNumber(), d1.getHighNumber()); 
	
	for (int i=0; i<numThrows; i++)
	{
		// Send numbers to histogram by throwing die
		dieHistogram.update(d1.throwDie());
	}	
	
	// plot results of histogram - see utility files
	plotDieHistogram(d1, dieHistogram);	

	//----------------------------------------------------------------
	// Coin  
	//----------------------------------------------------------------
	
	// Create coin object
	aCoin c1;
	
	// Ask user how many times you want to flip
	cout << "\nHow many times do you want to flip the coin?" << endl; 
	int numFlips;
	cin >> numFlips;
	cout << endl; 

	// create histogram object
	aHistogram coinHistogram(c1.getLowNumber(),c1.getHighNumber()); 
	
	// Display historgram for coin tosses 
	for (int i=0; i<numFlips; i++)
	{
		// Send numbers to histogram by throwing coin
		coinHistogram.update(c1.flip());
	}	

	// plot results of histogram - see utility files
	plotCoinHistogram(c1, coinHistogram);	

}//end main

