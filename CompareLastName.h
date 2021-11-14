#ifndef COMPARELASTNAME_H
#define COMPARELASTNAME_H

#include <iostream>

#include "Person.h"

using namespace std;

class CompareLastName : public Person
{
    public:
        /*
        operator: Comparative function for the base class member data comparing the LastName
        @param - Person pointer a
        @param - Person pointer b
        @return - none
        */
        bool operator() (Person *a, Person *b);
};

#endif