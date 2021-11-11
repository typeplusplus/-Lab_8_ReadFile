#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <iomanip>

using namespace std;

class Person
{
    public:
            Person();
            Person(string fn, string ln, string s, int m, int d, int y);

            void printInfo();

            int getMonth();
            int getYear();

            string getLastName();

    private:
            string fname, lname, gender;
            int month, day, year;
};

#endif