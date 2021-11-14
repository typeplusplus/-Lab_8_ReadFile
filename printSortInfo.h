#ifndef PRINTSORTINFO_H
#define PRINTSORTINFO_H

#include <iostream>
#include <algorithm>  // used for vector sort
#include <iomanip>  // output format setw
#include <vector>

#include "Person.h"
#include "CompareMonth.h"
#include "CompareYear.h"

using namespace std;

/*
Function Name: printSortInfo
Purpose: This function takes a vector of pointers and sorts it based on the integer flag that is also passed to the function. 
 
@author Reece Doyle

@param - &fptr: Vector containing pointers of the 
@param - flag: Integer to determine what sorting method is used for the vector
@return - none
*/

void printSortInfo(vector<Person *> &fptr, int flag);

#endif
