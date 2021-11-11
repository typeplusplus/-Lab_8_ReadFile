#include <iostream>
#include <iomanip>

#include "Person.h"

using namespace std;

Person::Person() {};

Person::Person(string fn, string ln, string s, int m, int d, int y)
{
    fname = fn;
    lname = ln;
    gender = s;

    month = m;
    day = d;
    year = y;
}

void Person::printInfo()
{
      cout << setw(10) << fname
           << setw(10) << lname
           << setw(2) << gender
           << setw(10) << month
           << setw(10) << day
           << setw(10) << year << endl;
}

int Person::getMonth()
{
    return month;
}

int Person::getYear()
{
    return year;
}

string Person::getLastName()
{
    return lname;
}
