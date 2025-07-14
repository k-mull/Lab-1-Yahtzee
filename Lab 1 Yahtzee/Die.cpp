#include "Die.h"
#include <cstdlib>
#include <ctime>
#include<iostream>
using namespace std;
Die::Die(int sides) : sides(sides), value(1)
{
    srand(time(0));
}

void Die::roll() 
{
    value = rand() % sides + 1;
}

int Die::getValue() const 
{
    return value;
}
