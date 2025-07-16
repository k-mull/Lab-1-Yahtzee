#ifndef DIE_H
#define DIE_H
class Die 
{
private:
    //objects attributes
    int sides;
    int value;
public:
    //constructor
    Die();
    //overloaded constructor
    Die(int Numsides, int fVal);
    //roll function for dice
    void roll();
    //getters

    int getSides() const;
    int getValue() const;
    //setters
    void setSides();
    void setValue();
};
#endif
