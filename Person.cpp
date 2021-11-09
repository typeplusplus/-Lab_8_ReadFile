#include <iostream>

#include "Person.h"

using namespace std;

Person::Person(string fn, string ln, string s, int m, int d, int y)
{
    fname = fn;
    lname = ln;
    gender = s;

    month = m;
    day = d;
    year = y;
}

void const Person::printinfo()
{
    cout << "First name: " << fname 
             << " Last name: " << lname 
             << " Gender: " << gender 
             << " Birthday: " << month << "/" << day << "/" << year << endl;
    //Output vector that calls this function? or call this function for each person in the vector
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

string Person::getFirstName()
{
    return fname;
}