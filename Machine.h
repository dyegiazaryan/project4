#ifndef MACHINE_H
#define MACHINE_H
#include"Rotor.h"
#include<vector>
#include<fstream>
#include<iostream>

using namespace std;

class Machine
{
private:
    vector<Rotor>rotorList;
    vector<char>letter;
    vector<int>numList;
    string Text;
    int numbers;

public:
    Machine(vector<Rotor> &rotorList, vector<char> &letter, vector<int> &numList);
    void encode(vector<Rotor> &rotorList, vector<char> &letter);
    void decode(vector<Rotor> &rotorList, vector<int> &numList);

};

#endif
