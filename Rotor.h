#ifndef ROTOR_H
#define ROTOR_H
#include<iostream>

using namespace std;

class Rotor
{
   private:
       int multiplier;
       int adder;


   public:
       Rotor(int m, int a);
       int getMultiplier();
       int getAdder();
};

#endif
