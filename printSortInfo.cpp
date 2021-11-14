#include <iostream>
#include <vector>
#include <algorithm>  // used for vector sort
#include <iomanip>  // output format setw

#include "Person.h"
#include "CompareLastName.h"
#include "CompareMonth.h"
#include "CompareYear.h"

using namespace std;

void printSortInfo(vector<Person *> &fptr, int flag)
{
  if (flag == -1)
  {
    cout << "\nPrint out unsorted vector\n";
  }
  else if (flag == 0)
  {
    cout << "\nPrint out sorted vector by Month\n";
    sort(fptr.begin(), fptr.end(), CompareMonth());
  }
  else if(flag == 1)
  {
    cout << "\nPrint out sorted vector by Year\n";
    sort(fptr.begin(), fptr.end(), CompareYear());
  }
  else if(flag == 2)
  {
    cout << "\nPrint out sorted vector by Last Name\n";
    sort(fptr.begin(), fptr.end(), CompareLastName());
  }
  else
    sort(fptr.begin(), fptr.end());

  for (int i = 0; i < fptr.size(); i++)
    {
      fptr[i]->printInfo();
    }
};