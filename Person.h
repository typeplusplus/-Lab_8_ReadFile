#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
    public:
            Person(string fn, string ln, string s, int m, int d, int y);

            void const printinfo();

            int getMonth();
            int getYear();

            string getLastName();
            string getFirstName();

    private:
            string fname, lname, gender;
            int month, day, year;
};

#endif