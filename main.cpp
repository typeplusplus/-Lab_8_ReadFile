#include <iostream>

using namespace std;

int main()
{
  vector<Person *> fptr;
  
  printmefirst("Reece Doyle", "Read File Lab"); //Print student information
  
  /*
  readInfo - Read person.txt file and then store the info into vector pointer of person
  */
  readInfo("person.txt", fptr);
  
  /*
  PrintSortInfo - Print out all the person's record in the person vector
  @parm fptr : Vector of person
  @parm sortBy : -1 the print out will not be sorted, just as it is stored in the vector
                  0 the print ouw will be sorted by person's birth month. Can use alghorithm library
                  1 the print out will be sorted by person's birth year. Can use alsghorithm library
  */
  printSortInfo(fptr, -1); //No sort
  printSortInfo(fptr, 0); //Sorted by month
  printSortInfo(fptr, 1); //Sorted by year
}
