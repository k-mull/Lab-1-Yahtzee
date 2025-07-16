#include "Die.h"
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
Die::Die()
{
    sides = 6;
    value = 1;
}

Die::Die(int Numsides, int fVal) : sides(Numsides), value(fVal)
{

  
}

void Die::roll() 
{


    value = rand() % sides + 1;
}

int Die::getValue() const 
{
    return value;
}
int Die::getSides() const
{
    return sides;
}
void Die::setSides()
{
    this->sides = sides;
}
void Die::setValue()
{
    this->value = value;
}