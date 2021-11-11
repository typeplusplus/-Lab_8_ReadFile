#include <iostream>

#include "CompareMonth.h"
#include "Person.h"

using namespace std;

bool CompareMonth::operator() (Person *a, Person *b)
{
    return a->getMonth() < b->getMonth();
};