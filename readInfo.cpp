#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <string.h>

#include "Person.h"
#include "readInfo.h"

using namespace std;

void readInfo(string filename, vector<Person* > &fptr)
{
  int linenum = 1;
  
  string text, firstname, lastname, sex;
  int Year, Month, Day;

  Person* p;

  ifstream file(filename);

  if (file.is_open())
  {
    while (getline(file, text))
    { 
      istringstream sinput(text);

      sinput >> firstname >> lastname >> sex >> Year >> Month >> Day;

      p = new Person(firstname, lastname, sex, Month, Day, Year);

      fptr.push_back(p);
    }

    file.close();
  }
  else
    cout << "Unable to read file\n";
};