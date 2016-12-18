/*****************************************
Project 4, Cryptography
Author: David Yegiazaryan
Description: This program should allow the user to enter text messages and
encrypt them to ascii values using the values in the rotor file, or do the
opposite and decrypt a set of numbers.

Date created: 11/2/16
Last date modified: 11/4/16
*****************************************/
#include"Machine.h"
#include"Rotor.h"
#include <iostream>
using namespace std;

//This is a comment
int main()
{
  vector<Rotor> rotorList;
  vector<char> letter;
  Machine saveValues(rotorList, letter);

    return 0;
}
