#ifndef COMPAREYEAR_H
#define COMPAREYEAR_H

#include <iostream>

#include "Person.h"

using namespace std;

class CompareYear : public Person
{
    public:
        bool operator() (Person *a, Person *b);
};

#endif