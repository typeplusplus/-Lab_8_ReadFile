#ifndef READFILE_H
#define READFILE_H

#include <iostream>
#include <vector>

#include "Person.h"

using namespace std;

/*
Function Name: readInfo
Purpose: This program receives the reference vector and filename, the file will be opened and data will be fed to the declared varibles. Objects will be created for each grouping of data passed from the files. Created objects are then pushed into the reference vector passed to this function.

@author Reece Doyle

@param - filename: Name of the file to be used for input stream
@param - &fptr: Vector of pointers for the objects to be pushed placed in
@return - none
*/

void readInfo(string filename, vector<Person *> &fptr);

#endif
