#include <iostream>
#include <vector>
#include <algorithm>

#include "printmefirst.h"
#include "Person.h"
#include "Readfile.h"

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

/*
ReadInfo function: Read information from file and put into vector
  Param: File "person.txt"
  Param: Person vector

PrintSortInfo function which will take the person vector pointer and sort as input. 
  Param: fptr
  Param: sort identifier (-1: No sort, 0: Month, 1: Year) 
  For the Sort function:
    CompareMonth() - 
    CompareYear() - 
    CompareLastName() - 

Output must be formatted with columns

Reading file
    argc : how many arguments, can be put in after debug mode is triggered
    argv : Passing parameters into the program through the command line

    Gives the ability to go into debug mode when entering a command
  
  ifstream myfile("filename.txt"); //to link file

  myfile.is_open() checks to see if file is open successfully

  while loop to getlines myfile and string text

  (Datatype)istringstream (name)sinput(string text) - What is happening here?

  sinput - Standard Input


*/