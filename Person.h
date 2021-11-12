#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <iomanip>

using namespace std;

class Person
{
    public:
            //Constructor
            Person();
            Person(string fn, string ln, string s, int m, int d, int y);
            
            //Member Functions
            /***************************************/
            /*
            printInfo: Outputs information relatvent to the object used to call it
            @param - None
            @return - None
            */
            void printInfo();

            //Accessors
            /***************************************/
            /*
            getMonth: Returns the Month value of the Person object
            @param - None
            @return - Month
            */
            int getMonth();
            
            /*
            getYear: Returns the Year value of the Person object
            @param - None
            @return - Month
            */
            int getYear();
    
            /*
            getMonth: Returns the Month value of the Person object
            @param - None
            @return - Month
            */
            string getLastName();

    private:
            //Member Data
            string fname, lname, gender;
            int month, day, year;
};

#endif
