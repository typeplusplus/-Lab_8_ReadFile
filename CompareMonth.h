#ifndef COMPAREMONTH_H
#define COMPAREMONTH_H

#include <iostream>

#include "Person.h"

using namespace std;

class CompareMonth : public Person
{
    public:
        bool operator() (Person *a, Person *b);
};

#endif