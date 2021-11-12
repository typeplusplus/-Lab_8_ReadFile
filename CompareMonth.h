#ifndef COMPAREMONTH_H
#define COMPAREMONTH_H

#include <iostream>

#include "Person.h"

using namespace std;

class CompareMonth : public Person
{
    public:
        /*
        operator: Comparative function for the base class member data comparing the Months
        @param - Person pointer a
        @param - Person pointer b
        @return - none
        */
        bool operator() (Person *a, Person *b);
};

#endif
