// Histogram class definition header file
// Implementation defined in aHistogram.cpp
// Project 2
// Maynard, Ehlers

// Ability to receive numbers and update
// Clear
// Send vector to plotting function

#ifndef AHISTOGRAM_H
#define AHISTOGRAM_H

#include <iostream>
#include <vector>
using namespace std;

class aHistogram
{
public:
	aHistogram(int low = 0, int high = 1);  //default constructor
	~aHistogram(); //destructor
	void clear(); //clears histogram data
	void update(int n); //updates histogram with individual numbers
	void setRange(int low, int high); //set range of numbers for histogram
	int count(int randomNumber) const;  //returns the count of a certain number
	vector<int> & getCountVector(); //returns all the counts in vector form
private:
	int _low;
	int _high;
	vector<int> _v1; //store data in buckets
	vector<int> _frequency; //count per bucket
};

#endif