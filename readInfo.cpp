#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

#include <algorithm> // used for vector sort
#include <iomanip> // output format setw
#include <string.h>

#include "Person.h"
#include "readInfo.h"

using namespace std;

void readInfo(string filename, vector<Person *> &fptr)
{
    string fname, lname, gender;
    int month, day, year;

    int linenum = 1;

    string text;

    ifstream myfile(filename);

    if (myfile.is_open())
    {
        while(getline(myfile, text))
        {
            Person input(fname, lname, gender, year, month, day);

            fptr.emplace_back(input);
        }
    }
};

// How do I write this info to a vector?