#ifndef DIE
#define DIE
#include <iostream>
using namespace std;
class Die
{
private:
	int numberOfSides;
	int faceValue;
public:
	// Constructor
	Die();
	Die(int numSides, int fVal);
	void setNumberOfSides(int numSides);
	void setFaceValue(int fVal);
	int getNumberOfSides() const;
	int getFaceValue() const;
	void roll();
	string describeDie();
};


#endif DIE
