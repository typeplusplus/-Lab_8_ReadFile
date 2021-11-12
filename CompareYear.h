#ifndef COMPAREYEAR_H
#define COMPAREYEAR_H

#include <iostream>

#include "Person.h"

using namespace std;

class CompareYear : public Person
{
    public:
        /*
        operator: Comparative function for the base class member data comparing the months
        @param - Person pointer a
        @param - Person pointer b
        @return - none
        */
        bool operator() (Person *a, Person *b);
};

#endif
