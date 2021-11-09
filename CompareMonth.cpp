#include <iostream>

#include "CompareMonth.h"

using namespace std;

bool CompareMonth::operator() (Person *a, Person *b)
{
    return a->getMonth() < b->getMonth();
}