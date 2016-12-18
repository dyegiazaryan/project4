/*****************************************
Project 4, Cryptography: Decoder
Author: David Yegiazaryan
Description:

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

  Machine d(rotorList, letter, numList);
  d.decode(rotorList, numList);

    return 0;
}
