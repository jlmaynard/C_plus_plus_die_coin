// Utility function definitions
#include <iostream>
#include <vector>
#include <iomanip>
#include "utility.h"
using namespace std;

void outputVector(const vector<int> &v) //const - don't change what you print
{
	for (size_t i=0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}

//----------------------------------------------------------------
// Function definition to plot histogram for die 
//----------------------------------------------------------------
void plotDieHistogram (const aDie &d, const aHistogram &h)
{
	// Print header
	cout << left << setw(8) << "Number" << setw(7) << right << "Frequency" << endl;
	
	// Just uncomment the next line to add dashes
	// cout << setfill ('-'); //set it once and cout remembers
	int maxCount = 0; //biggest count used for scaling graph
	for (int i=1; i <= d.getHighNumber(); i++)
	{
		cout << left << setw(7) << i << setw(5) << right << h.count(i) << endl;
		if (h.count(i) > maxCount)
			maxCount = h.count(i); //set maxCount to the biggest frequency number seen
	}

		cout << endl; 

	// Set width of histogram based on screen size
	// 40 characters seems ok. Could be a variable input if desired. 
	const int screen_width = 40; // constant for now 

	int scale_factor = 1; 
	if (maxCount > screen_width)
		scale_factor = maxCount/screen_width;  //Assume max graph width "screen_width"	
	
	// Print histogram
	for (int i=1; i <= d.getHighNumber(); i++) //start outer loop to print row
	{
		cout << left << setw(8) << i;
		for (int j=1; j<=(h.count(i)/scale_factor); j++) //print Xs,divide numbers by scale factor for printing
			cout << "X";
		cout << endl; //move to new line after printing Xs
	}
}// end die function

//----------------------------------------------------------------
// Function definition to plot histogram for coin 
//----------------------------------------------------------------
void plotCoinHistogram (const aCoin &c, const aHistogram &h)
{
	cout << left << setw(8) << "Side" << setw(7) << right << "Frequency" << endl;
	
	// Just uncomment the next line to add dashes
	// cout << setfill ('-'); //set it once and cout remembers
	int maxCount = 0; //biggest count used for scaling graph
	for (int i=0; i <= c.getHighNumber(); i++)
	{
		cout << left << setw(7) << (i == 0 ? "HEAD": "TAIL") << setw(5) << right << h.count(i) << endl;
		if (h.count(i) > maxCount)
			maxCount = h.count(i); //set maxCount to the biggest frequency number seen
	}

		cout << endl; 

	// Set width of histogram based on screen size
	// 40 characters seems ok. 
	const int screen_width = 40; // constant for now 

	int scale_factor = 1; 
	if (maxCount > screen_width)
		scale_factor = maxCount/screen_width;  //Assume max graph width "screen_width"	
	
	// Print histogram
	for (int i=0; i <= c.getHighNumber(); i++) //start outer loop to print row
	{
		cout << left << setw(8) << (i == 0 ? "HEAD": "TAIL");
		for (int j=1; j<=(h.count(i)/scale_factor); j++) //print Xs,divide numbers by scale factor for printing
			cout << "X";
		cout << endl; //move to new line after printing Xs
	}
}//end coin function