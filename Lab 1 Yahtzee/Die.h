#ifndef DIE_H
#define DIE_H
class Die 
{
private:
    int sides;
    int value;
public:
    Die();
    Die(int Numsides, int fVal);
    void roll();
    int getValue() const;
};
#endif
