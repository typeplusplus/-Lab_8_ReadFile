#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // used for vector sort 
#include <iomanip>  // output format setw 

#include <string.h>

using namespace std;

bool DEBUG = true;

int readInfo()
{
    string fname, lname, gender;
    int month, day, year;

    int linenum = 1;
    string text;

    ifstream myfile("person.txt");

    if(myfile.is_open())
    {
            while(getline(myfile, text)) //read one line at a time
            {
                    if(DEBUG)
                        cout << "Line: " << linenum++ << ": " << text << endl;
                    istringstream sinput(text); //using string stream
                    //Parse string into individual words
                    
                    sinput >> fname >> lname >> gender >> year >> month >> day;

                    if(DEBUG)
                        cout << "First name: " << fname 
                             << " Last name: " << lname 
                             << " Gender: " << gender
                             << " Birthday: " << month << "/" << day << "/" << year
                             << endl;
            }
        myfile.close();
    }
    else
        cout << "Unable to open file\n";
    
    return 0;
}