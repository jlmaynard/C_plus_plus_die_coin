// Utility functions used in main
// i.e., print histogram function

#include <iostream>
#include <vector>
#include "aDie.h"
#include "aCoin.h"
#include "aHistogram.h"
using namespace std;

// Function prototypes
void outputVector(const vector<int> &v); // display vector and don't change it
void plotDieHistogram(const aDie &d, const aHistogram &h); //const promises not to change object when printing
void plotCoinHistogram(const aCoin &c, const aHistogram &h); //const promises not to change object when printing