/*****************************************
Project 4, Cryptography: Encoder
Author: David Yegiazaryan
Description: This program should allow the user to enter text messages and
encrypt them to ascii values using the values in the rotor file.

Date created: 11/2/16
Last date modified: 11/8/16
*****************************************/
#include"Machine.h"
#include"Rotor.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<Rotor> rotorList;  vector<char> letter; vector<int> numList;


  Machine e(rotorList, letter, numList);
  e.encode(rotorList, letter);

    return 0;
}
