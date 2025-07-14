#pragma once
#include "Die.h"

class GameLogic 
{

private:
    Die dice[5];
    int scores[6];
    bool usedCategories[6];
public:
    GameLogic();
    void playGame();
    void rollDice(bool toRoll[5]);
    int calculateScore(int category);
};
