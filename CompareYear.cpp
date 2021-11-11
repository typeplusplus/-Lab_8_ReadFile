#include <iostream>

#include "CompareYear.h"

using namespace std;

bool CompareYear::operator() (Person *a, Person *b)
{
    return a->getYear() < b->getYear();
};