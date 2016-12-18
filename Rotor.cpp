#include"Rotor.h"
Rotor::Rotor(int m, int a)
    : multiplier(m), adder(a)
{
}

int Rotor::getMultiplier()
{
    return multiplier;
}


int Rotor::getAdder()
{
    return adder;
}
