#ifndef DIE_H
#define DIE_H
class Die 
{
private:
    int sides;
    int value;
public:
    Die(int sides = 6);
    void roll();
    int getValue() const;
};
#endif
