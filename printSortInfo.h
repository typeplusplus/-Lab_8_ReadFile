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

void printSortInfo(vector<Person *> &fptr, int flag);

#endif