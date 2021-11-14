#include <iostream>

#include "CompareLastName.h"
#include "Person.h"

using namespace std;

bool CompareLastName::operator() (Person *a, Person *b)
{
    return a->getLastName() < b->getLastName();
};